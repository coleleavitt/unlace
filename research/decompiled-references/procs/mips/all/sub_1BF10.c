__int64 __fastcall sub_1BF10(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  unsigned int v7; // ecx
  __int64 v8; // rdi
  __int64 first_seg; // rax
  __int64 result; // rax
  char v11; // dl
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax

  v6 = a3;
  if ( (unsigned __int64)(a3 - 0x10000) <= 0xFFFFFFFFFFFE7FFFLL && a4 )
  {
    if ( under_debugger )
      goto LABEL_30;
    interr(0);
  }
  else
  {
    *(_WORD *)(a2 + 24) = 204;
    v7 = *(_DWORD *)(a1 + 120);
    if ( v7 <= 5 )
    {
      if ( ((1LL << v7) & 0x16) != 0 )
        goto LABEL_13;
      if ( ((1LL << v7) & 0x29) != 0 )
      {
        v8 = *(_QWORD *)(a2 + 16);
        if ( v8 == -1 )
          first_seg = get_first_seg();
        else
          first_seg = getseg(v8);
        if ( first_seg )
        {
          if ( *(_BYTE *)(first_seg + 43) != 2 && (unsigned int)(*(_DWORD *)(a1 + 184) - 4) > 1 )
          {
            v6 = (unsigned int)v6;
            result = 1;
            if ( a4 )
            {
LABEL_12:
              *(_BYTE *)(a2 + 85) = result;
              *(_BYTE *)(a2 + 81) = 5;
              *(_QWORD *)(a2 + 88) = v6;
              *(_BYTE *)(a2 + 121) = 0;
              return result;
            }
LABEL_16:
            result = 2;
            if ( *(_WORD *)(a2 + 24) == 838 )
              result = 7;
            goto LABEL_12;
          }
LABEL_13:
          if ( (unsigned __int64)(v6 - 0x80000000LL) <= 0xFFFFFFFEFFFFFFFFLL )
            *(_WORD *)(a2 + 24) = 838;
          result = 1;
          if ( a4 )
            goto LABEL_12;
          goto LABEL_16;
        }
        goto LABEL_23;
      }
    }
  }
  if ( under_debugger )
    goto LABEL_30;
  interr(10339);
LABEL_23:
  if ( under_debugger )
LABEL_30:
    BUG();
  interr(10206);
  v12 = 0;
  if ( a2 > 0x69D600000LL )
  {
    if ( v11 )
      v13 = 0x9AFA00000LL;
    else
      v13 = 0x80000;
    LOBYTE(v12) = a2 < v13;
  }
  return v12;
}
