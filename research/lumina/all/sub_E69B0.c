unsigned __int64 __fastcall sub_E69B0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // ebx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  char v6; // al
  const char *v7; // rcx
  const char *v8; // rdx
  char v9; // al

  result = a2;
  v3 = 1;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)(result + 80);
    *(_DWORD *)(result + 4) |= 0x100u;
    *(_QWORD *)(result + 88) = v4;
    if ( !v5 )
      break;
    ++v3;
    if ( *(_QWORD *)(v5 + 72) )
    {
      v6 = *(_BYTE *)result;
      if ( v6 == -120 )
      {
        v7 = "EXCEPT";
      }
      else if ( v6 == -119 )
      {
        v7 = "INTERSECT";
      }
      else
      {
        v7 = "UNION ALL";
        v8 = "ORDER BY";
        if ( v6 == -121 )
        {
LABEL_13:
          result = sub_DBD10(a1, "%s clause should come after %s not before", v8, v7);
          break;
        }
        v7 = "UNION";
      }
      v8 = "ORDER BY";
      goto LABEL_13;
    }
    v4 = result;
    if ( *(_QWORD *)(v5 + 96) )
    {
      v9 = *(_BYTE *)result;
      v7 = "EXCEPT";
      if ( v9 != -120 )
      {
        v7 = "INTERSECT";
        if ( v9 != -119 )
        {
          if ( v9 == -121 )
            v7 = "UNION ALL";
          else
            v7 = "UNION";
        }
      }
      v8 = "LIMIT";
      goto LABEL_13;
    }
    result = v5;
  }
  if ( (*(_BYTE *)(a2 + 5) & 4) == 0 )
  {
    result = *(unsigned int *)(*(_QWORD *)a1 + 152LL);
    if ( (int)result < v3 && (int)result > 0 )
      return sub_DBD10(a1, "too many terms in compound SELECT");
  }
  return result;
}
