char *__fastcall sub_1360(char *s1)
{
  const char *v1; // rbp

  v1 = "CODE";
  if ( strcmp(s1, ".text") )
  {
    if ( strcmp(s1, "D3DX") )
    {
      if ( strcmp(s1, "XGRPH") )
      {
        if ( strcmp(s1, "DSOUND") )
        {
          if ( strcmp(s1, "XPP") )
          {
            if ( strcmp(s1, "XNET") )
            {
              if ( strcmp(s1, "D3D") )
              {
                v1 = "DATA";
                if ( strcmp(s1, ".data") )
                {
                  if ( strcmp(s1, "data")
                    && strcmp(s1, ".rdata")
                    && strcmp(s1, ".XPP")
                    && strcmp(s1, ".XBLD")
                    && strcmp(s1, "D3D_RW")
                    && strcmp(s1, "D3DX_RW")
                    && strcmp(s1, "XGRPH_RW")
                    && strcmp(s1, "INIT")
                    && strcmp(s1, "XTIMAGE")
                    && strcmp(s1, ".tls") )
                  {
                    return s1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (char *)v1;
}

