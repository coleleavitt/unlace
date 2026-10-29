unsigned __int64 sub_F63C0(__int64 a1, __int64 a2, _BYTE *a3, ...)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  double v6; // xmm0_8
  _QWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 *v12; // rax
  gcc_va_list va; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-D0h]
  __int64 v15; // [rsp+48h] [rbp-B0h]
  __int64 v16; // [rsp+50h] [rbp-A8h]
  __int64 v17; // [rsp+58h] [rbp-A0h]
  __int128 v18; // [rsp+60h] [rbp-98h]

  va_start(va, a3);
  v15 = va_arg(va, _QWORD);
  v3 = v15;
  v16 = va_arg(va, _QWORD);
  v4 = v16;
  v17 = va_arg(va, _QWORD);
  v5 = v17;
  *(double *)&v18 = va_arg(va, double);
  v6 = *(double *)&v18;
  va_end(va);
  v14 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 80) = a2;
  if ( (_DWORD)a2 != 3082 )
  {
    if ( (a2 & 0xFB) == 0xA )
    {
      sub_CA1F0((__int64 *)a1);
      a2 = (unsigned int)a2;
      if ( a3 )
      {
LABEL_4:
        if ( *(_QWORD *)(a1 + 392) )
          goto LABEL_5;
LABEL_12:
        v12 = sub_DC1C0(a1, 0x38u);
        if ( !v12 )
        {
          *(_QWORD *)(a1 + 392) = 0;
          return __readfsqword(0x28u) ^ v14;
        }
        v12[3] = a1;
        *((_WORD *)v12 + 10) = 1;
        *(_QWORD *)(a1 + 392) = v12;
        goto LABEL_5;
      }
    }
    else if ( a3 )
    {
      goto LABEL_4;
    }
    *(_DWORD *)(a1 + 80) = a2;
    if ( !(_DWORD)a2 && !*(_QWORD *)(a1 + 392) )
    {
      *(_DWORD *)(a1 + 84) = -1;
      return __readfsqword(0x28u) ^ v14;
    }
LABEL_11:
    sub_CA220((__int64 *)a1, a2, (__int64)a3, v3, v4, v5);
    return __readfsqword(0x28u) ^ v14;
  }
  if ( !a3 )
    goto LABEL_11;
  if ( !*(_QWORD *)(a1 + 392) )
    goto LABEL_12;
LABEL_5:
  va_start(va, a3);
  v8 = (_QWORD *)sub_DBC60(a1, a3, (__int64)va, v6);
  v10 = *(_QWORD *)(a1 + 392);
  if ( v10 )
    sub_F11D0(v10, v8, -1, 1, sub_D42A0, v9);
  return __readfsqword(0x28u) ^ v14;
}
