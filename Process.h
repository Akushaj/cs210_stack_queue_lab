//
// Created by AkshajKri on 10/6/26.
//

#pragma once
#include <string>
#include <iostream>

class Process {
public:
    Process(int pid, const std::string& name , const std::string& desc) : pid_(pid) , name_(name) , desc_(desc) {}

    //getters
    int getPid() const {
        return pid_;
    }
    std::string getName() const{
        return name_;
    }
    std::string getDesc() const {
        return desc_;
    }

    //setters
    void setPid(int pid) {
        pid_ = pid;
    }
    void setName(const std::string name) {
         name_ = name;
    }
    void setDesc(const std::string desc) {
        desc_ = desc;
    }

    //print
    void print() const{
        std::cout<< "PID: " << getPid() << " Name: " << getName() << "| Desc: " << getDesc() << std::endl;
    }

    bool operator==(const Process& other) const {
        return pid_ == other.pid_;
    }

    friend std::ostream& operator<<(std::ostream& out, const Process& p) {
        return out << p.pid_ << " " << p.name_ << " ( " << p.desc_  << " )";
    }
private:
    int pid_;
    std::string name_;
    std::string desc_;
};
