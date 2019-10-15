#include "line.h"

Line::Line(Line const &line) { this->datas_ = line.datas_; }
Line::Line(Line &&line) { datas_.swap(line.datas_); }
Line &Line::operator=(Line const &line) {
  this->datas_ = line.datas_;
  return *this;
}
Line &Line::operator=(Line &&line) {
  datas_.swap(line.datas_);
  return *this;
}
Line::Line(size_t size) { datas_ = std::vector<std::pair<float, float>>(size); }
