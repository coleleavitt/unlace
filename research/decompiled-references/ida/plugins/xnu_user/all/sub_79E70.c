__int64 __fastcall sub_79E70(_QWORD *a1, const char *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rdx
  char v7; // [rsp+1Bh] [rbp-4Dh]
  int v8; // [rsp+1Ch] [rbp-4Ch]
  int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+24h] [rbp-44h]

  if ( (*(_DWORD *)debug & 0x100000) != 0 )
    sub_13DB0((__int64)"TLS: OpenSSL version \"%s\"\n", a2);
  if ( (unsigned int)qsscanf() == 4 )
  {
    v4 = v7 | (v10 << 8) | (v9 << 16) | (v8 << 24);
    if ( v4 >= a3 )
    {
      if ( v4 > 0x100FFFF )
      {
        v5 = (_DWORD *)operator new(0x218u);
        memset(v5, 0, 0x218u);
        *(_QWORD *)v5 = off_98D30;
LABEL_7:
        *a1 = v5;
        v5[92] = v4;
        return 1;
      }
LABEL_15:
      v5 = (_DWORD *)operator new(0x1A8u);
      memset(v5, 0, 0x1A8u);
      *(_QWORD *)v5 = off_98C60;
      goto LABEL_7;
    }
  }
  else if ( (unsigned int)qsscanf() == 3 && v8 == 2 && (unsigned int)(v9 - 2) <= 3 )
  {
    if ( (*(_DWORD *)debug & 0x100000) != 0 )
      sub_13DB0((__int64)"TLS: LibreSSL detected. Setting OpenSSL API version to 1.0.1g\n", "LibreSSL %d.%d.%d");
    v4 = 16777575;
    if ( a3 <= 0x1000167 )
      goto LABEL_15;
  }
  return 0;
}

