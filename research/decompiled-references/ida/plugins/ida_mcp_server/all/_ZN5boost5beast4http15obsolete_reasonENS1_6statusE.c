char *__fastcall boost::beast::http::obsolete_reason(boost::beast::http *this)
{
  char *v1; // rdx

  switch ( (int)this )
  {
    case 100:
      v1 = "Continue";
      break;
    case 101:
      v1 = "Switching Protocols";
      break;
    case 102:
      v1 = "Processing";
      break;
    case 103:
      v1 = "Early Hints";
      break;
    case 200:
      v1 = "OK";
      break;
    case 201:
      v1 = "Created";
      break;
    case 202:
      v1 = "Accepted";
      break;
    case 203:
      v1 = "Non-Authoritative Information";
      break;
    case 204:
      v1 = "No Content";
      break;
    case 205:
      v1 = "Reset Content";
      break;
    case 206:
      v1 = "Partial Content";
      break;
    case 207:
      v1 = "Multi-Status";
      break;
    case 208:
      v1 = "Already Reported";
      break;
    case 226:
      v1 = "IM Used";
      break;
    case 300:
      v1 = "Multiple Choices";
      break;
    case 301:
      v1 = "Moved Permanently";
      break;
    case 302:
      v1 = "Found";
      break;
    case 303:
      v1 = "See Other";
      break;
    case 304:
      v1 = "Not Modified";
      break;
    case 305:
      v1 = "Use Proxy";
      break;
    case 307:
      v1 = "Temporary Redirect";
      break;
    case 308:
      v1 = "Permanent Redirect";
      break;
    case 400:
      v1 = "Bad Request";
      break;
    case 401:
      v1 = "Unauthorized";
      break;
    case 402:
      v1 = "Payment Required";
      break;
    case 403:
      v1 = "Forbidden";
      break;
    case 404:
      v1 = "Not Found";
      break;
    case 405:
      v1 = "Method Not Allowed";
      break;
    case 406:
      v1 = "Not Acceptable";
      break;
    case 407:
      v1 = "Proxy Authentication Required";
      break;
    case 408:
      v1 = "Request Timeout";
      break;
    case 409:
      v1 = "Conflict";
      break;
    case 410:
      v1 = "Gone";
      break;
    case 411:
      v1 = "Length Required";
      break;
    case 412:
      v1 = "Precondition Failed";
      break;
    case 413:
      v1 = "Payload Too Large";
      break;
    case 414:
      v1 = "URI Too Long";
      break;
    case 415:
      v1 = "Unsupported Media Type";
      break;
    case 416:
      v1 = "Range Not Satisfiable";
      break;
    case 417:
      v1 = "Expectation Failed";
      break;
    case 418:
      v1 = "I'm a teapot";
      break;
    case 421:
      v1 = "Misdirected Request";
      break;
    case 422:
      v1 = "Unprocessable Entity";
      break;
    case 423:
      v1 = "Locked";
      break;
    case 424:
      v1 = "Failed Dependency";
      break;
    case 425:
      v1 = "Too Early";
      break;
    case 426:
      v1 = "Upgrade Required";
      break;
    case 428:
      v1 = "Precondition Required";
      break;
    case 429:
      v1 = "Too Many Requests";
      break;
    case 431:
      v1 = "Request Header Fields Too Large";
      break;
    case 451:
      v1 = "Unavailable For Legal Reasons";
      break;
    case 500:
      v1 = "Internal Server Error";
      break;
    case 501:
      v1 = "Not Implemented";
      break;
    case 502:
      v1 = "Bad Gateway";
      break;
    case 503:
      v1 = "Service Unavailable";
      break;
    case 504:
      v1 = "Gateway Timeout";
      break;
    case 505:
      v1 = "HTTP Version Not Supported";
      break;
    case 506:
      v1 = "Variant Also Negotiates";
      break;
    case 507:
      v1 = "Insufficient Storage";
      break;
    case 508:
      v1 = "Loop Detected";
      break;
    case 510:
      v1 = "Not Extended";
      break;
    case 511:
      v1 = "Network Authentication Required";
      break;
    default:
      v1 = "<unknown-status>";
      break;
  }
  return v1;
}

