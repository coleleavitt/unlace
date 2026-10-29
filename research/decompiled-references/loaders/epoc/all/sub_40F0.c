const char *__fastcall sub_40F0(int a1, __int64 a2)
{
  const char *result; // rax

  result = "Supervisor";
  if ( a1 != 950 )
  {
    if ( a1 > 850 )
    {
      qsnprintf(a2, 1024, "RealTimeServer+%d", a1 - 850);
    }
    else
    {
      result = "RealTimeServer";
      if ( a1 == 850 )
        return result;
      if ( a1 > 750 )
      {
        qsnprintf(a2, 1024, "FileServer+%d", a1 - 750);
      }
      else
      {
        result = "FileServer";
        if ( a1 == 750 )
          return result;
        if ( a1 > 650 )
        {
          qsnprintf(a2, 1024, "WindowServer+%d", a1 - 650);
        }
        else
        {
          result = "WindowServer";
          if ( a1 == 650 )
            return result;
          if ( a1 > 450 )
          {
            qsnprintf(a2, 1024, "High+%d", a1 - 450);
          }
          else
          {
            result = "High";
            if ( a1 == 450 )
              return result;
            if ( a1 > 350 )
            {
              qsnprintf(a2, 1024, "Foreground+%d", a1 - 350);
            }
            else
            {
              result = "Foreground";
              if ( a1 == 350 )
                return result;
              if ( a1 > 250 )
              {
                qsnprintf(a2, 1024, "Background+%d", a1 - 250);
              }
              else
              {
                result = "Background";
                if ( a1 == 250 )
                  return result;
                if ( a1 <= 150 )
                {
                  result = "Low";
                  if ( a1 != 150 )
                    return "Unknown";
                  return result;
                }
                qsnprintf(a2, 1024, "Low+%d", a1 - 150);
              }
            }
          }
        }
      }
    }
    return (const char *)a2;
  }
  return result;
}
