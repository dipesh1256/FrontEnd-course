import React, { useState } from "react";
import Weblogo from "../assets/asset0.svg";
import { NavLink, Outlet } from "react-router-dom";
import IconBar from "./icone";
import { FaGripVertical, FaHeart, FaSearch, FaUser, FaBars, FaTimes } from "react-icons/fa"; 
import "./Navbar.css";

const Navbar = () => {
  const [activeMenu, setActiveMenu] = useState(null);
  const [isMobileMenuOpen, setIsMobileMenuOpen] = useState(false);

  const toggleMenu = (menu) => {
    setActiveMenu(activeMenu === menu ? null : menu);
  };

  const toggleMobileMenu = () => {
    setIsMobileMenuOpen(!isMobileMenuOpen);
  };

  return (
    <>
      <div className="bg-[#fff] w-full h-28 flex justify-between items-center z-50 sticky top-0 px-4 md:px-10">
        <div className="flex items-center justify-between w-full">
          <div className="flex items-center">
            <button
              onClick={toggleMobileMenu}
              className="text-gray-950 text-2xl md:hidden"
            >
              {isMobileMenuOpen ? <FaTimes /> : <FaBars />}
            </button>
            <NavLink to="/" className="ml-4 md:ml-0">
              <img id="logo" className="h-12" src={Weblogo} alt="Not Found" />
            </NavLink>
          </div>

          {/* Desktop Menu */}
          <div className="hidden md:flex space-x-8">
            <div
              className="relative"
              onMouseEnter={() => toggleMenu("home")}
              onMouseLeave={() => toggleMenu(null)}
            >
              <button className="NavbatTxt">Home</button>
              {activeMenu === "home" && (
                <ul className="absolute left-0 w-48 bg-white text-[#ff6822] shadow-lg rounded-md overflow-hidden">
                  <li>
                    <NavLink
                      to="/"
                      className="home"
                      onClick={() => toggleMenu(null)}
                    >
                      Home1
                    </NavLink>
                  </li>
                  {/* Add other Home links */}
                </ul>
              )}
            </div>
            {/* Repeat for other categories: Shop, Products, Blog, Page */}
          </div>

          {/* Icon Bar */}
          <div className="hidden md:flex items-center">
            <IconBar />
          </div>
        </div>
      </div>

      {/* Mobile Menu */}
      {isMobileMenuOpen && (
        <div className="md:hidden bg-[#ff6828] text-white text-xl font-bold space-y-4 py-4 px-4 w-full">
          <ul>
            <li>
              <NavLink to="/" onClick={toggleMobileMenu}>
                Home
              </NavLink>
            </li>
            <li>
              <NavLink to="/shop" onClick={toggleMobileMenu}>
                Shop
              </NavLink>
            </li>
            <li>
              <NavLink to="/product" onClick={toggleMobileMenu}>
                Products
              </NavLink>
            </li>
            <li>
              <NavLink to="/blog" onClick={toggleMobileMenu}>
                Blog
              </NavLink>
            </li>
            <li>
              <NavLink to="/page" onClick={toggleMobileMenu}>
                Page
              </NavLink>
            </li>
          </ul>
        </div>
      )}

      {/* Bottom Navigation Bar for Mobile */}
      <div
        className="flex justify-evenly items-center fixed bg-yellow-300 h-16 bottom-0 w-full md:hidden"
        id="toggelHiden"
      >
        <a className="w-24 h-full flex flex-col justify-center items-center">
          <FaGripVertical />
          Shop
        </a>
        <a className="w-24 h-full flex flex-col justify-center items-center">
          <FaUser />
          Account
        </a>
        <a className="w-24 h-full flex flex-col justify-center items-center">
          <FaSearch />
          Search
        </a>
        <a className="w-24 h-full flex flex-col justify-center items-center">
          <FaHeart />
          Wishlist
        </a>
      </div>
      
      <Outlet />
    </>
  );
};

export default Navbar;
