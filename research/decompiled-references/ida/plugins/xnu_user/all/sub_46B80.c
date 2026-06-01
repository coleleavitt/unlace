__int64 __fastcall sub_46B80(_DWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  char v10; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v5 = sub_6E2A0();
  if ( !(_BYTE)v5 && !*(_DWORD *)(qword_9AD30 + 144LL * (int)a1[294] + 120) )
  {
    v7 = sub_30400((__int64)a1, a2, a1[196]);
    if ( (*(__int64 (__fastcall **)(_DWORD *, __int64, char *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           v7,
           &v10,
           1,
           0) == 1
      && (unsigned __int8)(v10 + 62) <= 1u )
    {
      v8 = a1[195];
      v11[0] = -1;
      v9 = sub_30400((__int64)a1, a2, v8);
      if ( (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
             a1,
             v9,
             v11,
             8,
             0) == 8 )
        LOBYTE(v5) = v11[0] == a4;
    }
  }
  return v5;
}

