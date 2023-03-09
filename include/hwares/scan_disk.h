#pragma once

#include <string>
#include <vector>

namespace bscan {

class Disk {
  friend std::vector<Disk> getAllDisks();

 public:
  Disk(std::string& vendor, std::string& model, std::string& serialNumber, int64_t size_Bytes);
  ~Disk() = default;

  [[nodiscard]] const std::string& vendor() const;
  [[nodiscard]] const std::string& model() const;
  [[nodiscard]] const std::string& serialNumber() const;
  [[nodiscard]] int64_t size_Bytes() const;

 private:
  Disk() = default;
  std::string _vendor;
  std::string _model;
  std::string _serialNumber;
  int64_t _size_Bytes = -1;
};

std::vector<Disk> getAllDisks();

};