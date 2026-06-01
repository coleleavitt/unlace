__int64 __fastcall sub_157B0(_BYTE *a1)
{
  __int64 *v1; // r12
  int v2; // ecx
  __int16 v3; // ax
  const char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned int v7; // r13d
  void (__fastcall *v8)(_BYTE *, _QWORD); // rax
  __int64 v10; // r12
  _QWORD v11[137]; // [rsp+0h] [rbp-448h] BYREF

  v1 = nullptr;
  v2 = *((_DWORD *)a1 + 63);
  v11[129] = __readfsqword(0x28u);
  if ( v2 )
  {
    v3 = *((_WORD *)a1 + 124);
    switch ( v3 )
    {
      case 304:
        v10 = 0;
        break;
      case 305:
        v10 = 1;
        break;
      case 307:
        v10 = 2;
        break;
      case 308:
        v10 = 3;
        break;
      case 311:
        v10 = 4;
        break;
      case 312:
        v10 = 5;
        break;
      default:
        goto LABEL_8;
    }
    v1 = &qword_1AF60[2 * v10];
  }
LABEL_8:
  v4 = *((const char **)a1 + 30);
  if ( (unsigned __int8)netnode_charval() == 1 )
  {
    v4 = "|| ";
    (*(void (__fastcall **)(_BYTE *, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "|| ", 5);
  }
  (*(void (__fastcall **)(_BYTE *, const char *))(*(_QWORD *)a1 + 296LL))(a1, v4);
  if ( (a1[268] & 8) != 0 )
  {
    if ( !*((_DWORD *)a1 + 63) || (v6 = 0, a1[257]) )
    {
      v6 = 1;
      (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
    }
    while ( 1 )
    {
      v5 = *(_QWORD *)a1;
      v7 = v6;
      if ( !a1[40 * v6 + 265] )
        break;
      if ( *((_DWORD *)a1 + 63) && (char)a1[257] == (_DWORD)v6 )
      {
        (*(void (__fastcall **)(_BYTE *, __int64))(v5 + 128))(a1, 0xFFFFFFFFLL);
        qsnprintf();
        add_spaces();
        (*(void (__fastcall **)(_BYTE *, _QWORD *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v11, 5);
      }
      else
      {
        (*(void (__fastcall **)(_BYTE *, __int64))(v5 + 32))(a1, 44);
      }
      v8 = *(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL);
      if ( v1 )
      {
        if ( *((_DWORD *)v1 + 1) == (_DWORD)v6 && *((_BYTE *)v1 + 12) )
        {
          v8(a1, *((unsigned int *)v1 + 2));
          (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
          (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, (unsigned int)v6);
        }
        else
        {
          v8(a1, (unsigned int)v6);
        }
        if ( *((_DWORD *)v1 + 1) == (_DWORD)v6 && !*((_BYTE *)v1 + 12) )
        {
          (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
          (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, *((unsigned int *)v1 + 2));
        }
        if ( (_DWORD)++v6 == 8 )
          return (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL, v5);
      }
      else
      {
        ++v6;
        v8(a1, v7);
        if ( (_DWORD)v6 == 8 )
          return (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL, v5);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL, v5);
}

