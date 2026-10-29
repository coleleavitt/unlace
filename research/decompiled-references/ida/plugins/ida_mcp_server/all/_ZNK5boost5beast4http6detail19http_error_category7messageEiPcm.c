const char *__fastcall boost::beast::http::detail::http_error_category::message(
        boost::beast::http::detail::http_error_category *this,
        __int64 a2,
        char *a3)
{
  const char *result; // rax

  switch ( a2 )
  {
    case 1LL:
      result = "end of stream";
      break;
    case 2LL:
      result = "partial message";
      break;
    case 3LL:
      result = "need more";
      break;
    case 4LL:
      result = "unexpected body";
      break;
    case 5LL:
      result = "need buffer";
      break;
    case 6LL:
      result = "end of chunk";
      break;
    case 7LL:
      result = "buffer overflow";
      break;
    case 8LL:
      result = "header limit exceeded";
      break;
    case 9LL:
      result = "body limit exceeded";
      break;
    case 10LL:
      result = "bad alloc";
      break;
    case 11LL:
      result = "bad line ending";
      break;
    case 12LL:
      result = "bad method";
      break;
    case 13LL:
      result = "bad target";
      break;
    case 14LL:
      result = "bad version";
      break;
    case 15LL:
      result = "bad status";
      break;
    case 16LL:
      result = "bad reason";
      break;
    case 17LL:
      result = "bad field";
      break;
    case 18LL:
      result = "bad value";
      break;
    case 19LL:
      result = "bad Content-Length";
      break;
    case 20LL:
      result = "bad Transfer-Encoding";
      break;
    case 21LL:
      result = "bad chunk";
      break;
    case 22LL:
      result = "bad chunk extension";
      break;
    case 23LL:
      result = "bad obs-fold";
      break;
    case 24LL:
      result = "multiple Content-Length";
      break;
    case 25LL:
      result = "stale parser";
      break;
    case 26LL:
      result = "unexpected eof in body";
      break;
    case 27LL:
      result = "header field name too large";
      break;
    case 28LL:
      result = "header field value too large";
      break;
    default:
      result = "beast.http error";
      break;
  }
  return result;
}

