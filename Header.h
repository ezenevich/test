#pragma once

using namespace System;

public ref class UserSession abstract sealed
{
public:
    static property String^ CurrentUserFIO {
        String^ get() { return _userFIO; }
        void set(String^ value) { _userFIO = value; }
    }
    static property String^ CurrentUsername {
        String^ get() { return _username; }
        void set(String^ value) { _username = value; }
    }
    static property String^ CurrentRole {
        String^ get() { return _role; }
        void set(String^ value) { _role = value; }
    }

private:
    static String^ _userFIO;
    static String^ _username;
    static String^ _role;
};
