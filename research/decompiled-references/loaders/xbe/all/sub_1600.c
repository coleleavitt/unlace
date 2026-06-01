__int64 __fastcall sub_1600(__int64 *a1, __int64 *a2, __int64 a3)
{
  void *v5; // rsi
  __int64 v6; // rsi
  void *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD vars0[38]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars98; // [rsp+98h] [rbp+98h]

  vars98 = __readfsqword(0x28u);
  qlseek(a3, 0, 0);
  if ( qlread(a3, vars0, 152) == 152 && vars0[0] == 17752 )
  {
    v5 = (void *)*a1;
    if ( (unsigned __int64)a1[2] <= 0xD )
    {
      v10 = qvector_reserve(a1, v5, 14, 1);
      *a1 = v10;
      v5 = (void *)v10;
    }
    a1[1] = 14;
    qmemcpy(v5, "X-box XE file", 13);
    *(_BYTE *)(*a1 + 13) = 0;
    v6 = *a2;
    if ( (unsigned __int64)a2[2] > 6 )
      goto LABEL_6;
    goto LABEL_14;
  }
  qlseek(a3, 0, 0);
  if ( qlread(a3, vars0, 152) == 152 && vars0[0] == 17752 || sub_1590(a3) )
  {
    v8 = (void *)*a1;
    if ( (unsigned __int64)a1[2] <= 0xE )
    {
      v11 = qvector_reserve(a1, v8, 15, 1);
      *a1 = v11;
      v8 = (void *)v11;
    }
    a1[1] = 15;
    qmemcpy(v8, "X-box XBE file", 14);
    *(_BYTE *)(*a1 + 14) = 0;
    v6 = *a2;
    if ( (unsigned __int64)a2[2] > 6 )
      goto LABEL_6;
LABEL_14:
    v9 = qvector_reserve(a2, v6, 7, 1);
    *a2 = v9;
    v6 = v9;
LABEL_6:
    a2[1] = 7;
    *(_DWORD *)v6 = 1635018093;
    *(_WORD *)(v6 + 4) = 25456;
    *(_BYTE *)(*a2 + 6) = 0;
    return 1;
  }
  return 0;
}
