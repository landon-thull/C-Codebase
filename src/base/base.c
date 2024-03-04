#include "base.h"

OperatingSystem operating_system_from_context(void) {
  OperatingSystem result = OperatingSystem_Null;

  if (OS_WINDOWS) {
    result = OperatingSystem_Windows;
  } else if (OS_LINUX) {
    result = OperatingSystem_Linux;
  } else if (OS_MAC) {
    result = OperatingSystem_Mac;
  }

  return result;
}

char* string_from_operating_system(OperatingSystem os) {
  char* result = "(null)";
  switch (os) {
    case OperatingSystem_Windows:
    result = "windows";
    break;
    case OperatingSystem_Linux:
    result = "linux";
    break;
    case OperatingSystem_Mac:
    result = "mac";
    break;
    default:
    break;
  }
  return result;
}

char* string_from_month(Month month) {
  char* result = "(null)";
  switch(month) {
    case Month_Jan:
    result = "january";
    break;
    case Month_Feb:
    result = "february";
    break;
    case Month_Mar:
    result = "march";
    break;
    case Month_Apr:
    result = "april";
    break;
    case Month_May:
    result = "may";
    break;
    case Month_Jun:
    result = "june";
    break;
    case Month_Jul:
    result = "july";
    break;
    case Month_Aug:
    result = "august";
    break;
    case Month_Sep:
    result = "september";
    break;
    case Month_Oct:
    result = "october";
    break;
    case Month_Nov:
    result = "november";
    break;
    case Month_Dec:
    result = "december";
    break;
    default:
    break;
  }

  return result;
}

char* string_from_day_of_week(DayOfWeek day_of_week) {
  char* result = "(null)";
  switch (day_of_week) {
    case DayOfWeek_Sunday:
    result = "sunday";
    break;
    case DayOfWeek_Monday:
    result = "monday";
    break;
    case DayOfWeek_Tuesday:
    result = "tuesday";
    break;
    case DayOfWeek_Wednesday:
    result = "wednesday";
    break;
    case DayOfWeek_Thursday:
    result = "thursday";
    break;
    case DayOfWeek_Friday:
    result = "friday";
    break;
    case DayOfWeek_Saturday:
    result = "saturday";
    break;
  }
  return result;
}