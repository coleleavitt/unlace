__int64 __fastcall sub_3F960(__int64 a1, signed int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = 0;
  if ( (unsigned int)a2 <= 0x3FF && (*(_BYTE *)(a1 + 4LL * a2 + 40) & 1) != 0 )
  {
    result = *(_QWORD *)(a1 + 4152);
    v3 = a1 + 4144;
    if ( result )
    {
      v4 = a1 + 4144;
      do
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(result + 16);
          v6 = *(_QWORD *)(result + 24);
          if ( *(_DWORD *)(result + 32) >= a2 )
            break;
          result = *(_QWORD *)(result + 24);
          if ( !v6 )
            goto LABEL_8;
        }
        v4 = result;
        result = *(_QWORD *)(result + 16);
      }
      while ( v5 );
LABEL_8:
      if ( v4 != v3 && *(_DWORD *)(v4 + 32) <= a2 )
        return v4 + 40;
    }
  }
  return result;
}

