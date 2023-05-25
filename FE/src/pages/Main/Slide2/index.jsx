import React, { useEffect, useState, useRef } from "react";
import TableComponent from "../../../components/TableComponent";
import RecordModal from "../../../components/RecordModal";
import "./Slide2.scss";
import Box from "@mui/material/Box";
import InputLabel from "@mui/material/InputLabel";
import MenuItem from "@mui/material/MenuItem";
import FormControl from "@mui/material/FormControl";
import Select from "@mui/material/Select";
import { MdSettingsVoice } from "react-icons/md";

const Slide2 = ({
  items,
  setSendData,
  send,
  sendData,
  removeData,
  setCheck,
  check,
  dataValid,
  user,
}) => {
  const isLoggedIn = user?.name !== undefined;
  const isLengthValid = items?.length < 10;

  const isCheckValid = check && isLoggedIn;
  const modalRef = useRef(null);
  const [openModal, setOpenModal] = useState(false);
  const [sound, setSound] = useState();

  const handleFrom = (event) => {
    setSendData({
      ...sendData,
      from: event.target.value,
    });
  };

  const handleTo = (event) => {
    setSendData({
      ...sendData,
      to: event.target.value,
    });
  };

  const handleClickOutside = (event) => {
    if (modalRef.current && !modalRef.current.contains(event.target)) {
      setOpenModal(false);
    }
  };

  useEffect(() => {
    document.addEventListener("mousedown", handleClickOutside);
    return () => {
      document.removeEventListener("mousedown", handleClickOutside);
    };
  }, []);

  const List = [
    "C101",
    "C102",
    "C103",
    "C104",
    "C105",
    "C106",
    "C107",
    "C108",
    "C201",
    "C202",
    "C203",
    "C204",
    "C205",
    "C206",
    "C207",
    "C208",
  ];

  return (
    <div className="swiper-slide2">
      <h1>부르미는 서빙 로봇</h1>
      <div>
        <TableComponent
          items={items}
          removeData={removeData}
          setCheck={setCheck}
          user={user}
        />
      </div>
      {isLoggedIn ? (
        isCheckValid ? (
          <h2>한 계정당 하나의 부르기가 가능합니다!</h2>
        ) : isLengthValid ? (
          <div
            style={{
              display: "flex",
              gap: "2rem",
              padding: "1.5rem 2rem",
              backgroundColor: "white",
              borderRadius: "20px",
            }}
          >
            <Box sx={{ minWidth: 200 }}>
              <FormControl fullWidth>
                <InputLabel
                  sx={{ fontFamily: "yg-jalnan" }}
                  id="demo-simple-select-label"
                >
                  보낼 곳
                </InputLabel>
                <Select value={sendData.from} onChange={handleFrom}>
                  {List.map((V, index) => (
                    <MenuItem
                      sx={{ fontFamily: "yg-jalnan" }}
                      key={index}
                      value={V}
                    >
                      <h4>{V}</h4>
                    </MenuItem>
                  ))}
                </Select>
              </FormControl>
            </Box>
            <Box sx={{ minWidth: 200, margin: "0, 5%" }}>
              <FormControl fullWidth>
                <InputLabel
                  sx={{ fontFamily: "yg-jalnan" }}
                  id="demo-simple-select-label"
                >
                  받는 곳
                </InputLabel>
                <Select value={sendData.to} onChange={handleTo}>
                  {List.map((V, index) => (
                    <MenuItem
                      sx={{ fontFamily: "yg-jalnan" }}
                      key={index}
                      value={V}
                    >
                      <h4>{V}</h4>
                    </MenuItem>
                  ))}
                </Select>
              </FormControl>
            </Box>
            {dataValid ? (
              <>
                <div
                  style={{
                    display: "flex",
                    justifyContent: "center",
                    alignItems: "center",
                    transition: "0.5s ease-in-out",
                  }}
                >
                  {sendData.record !== null ? (
                    <MdSettingsVoice
                      onClick={() => setOpenModal(!openModal)}
                      color="red"
                      fontSize={"2rem"}
                      style={{ cursor: "pointer" }}
                    />
                  ) : (
                    <MdSettingsVoice
                      onClick={() => setOpenModal(!openModal)}
                      color="black"
                      fontSize={"2rem"}
                      style={{ cursor: "pointer" }}
                    />
                  )}
                </div>
                <button
                  onClick={send}
                  style={{
                    padding: "0 2rem",
                    borderRadius: "20px",
                    border: "none",
                    cursor: "pointer",
                    transition: "0.5s ease-in-out",
                    backgroundColor: "#ff8c94",
                    color: "white",
                  }}
                >
                  부르기
                </button>
              </>
            ) : (
              <>
                <div
                  style={{
                    display: "flex",
                    justifyContent: "center",
                    alignItems: "center",
                  }}
                >
                  <MdSettingsVoice color="#d3d3d3" fontSize={"2rem"} />
                </div>
                <button
                  style={{
                    padding: "0 2rem",
                    borderRadius: "20px",
                    border: "none",
                  }}
                  disabled
                >
                  부르기
                </button>
              </>
            )}
          </div>
        ) : (
          <h2>부르미는 최대 10개의 데이터를 수집할 수 있습니다!</h2>
        )
      ) : (
        <h2>부르미를 이용하시려면 로그인을 해주세요!</h2>
      )}
      {openModal && (
        <div className="recordmodal-overlay">
          <div className="recordmodal-wrapper" ref={modalRef}>
            <RecordModal
              setSendData={setSendData}
              sendData={sendData}
              setOpenModal={setOpenModal}
              setSound={setSound}
              sound={sound}
            />
          </div>
        </div>
      )}
    </div>
  );
};

export default Slide2;
