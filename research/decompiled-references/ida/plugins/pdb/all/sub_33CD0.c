__int64 __fastcall sub_33CD0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // r15d
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, int, __int64); // rax
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-88h] BYREF
  __int64 v12; // [rsp+8h] [rbp-80h]
  _QWORD *v13; // [rsp+10h] [rbp-78h]
  _QWORD v14[3]; // [rsp+20h] [rbp-68h] BYREF
  int v15; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v16)(); // [rsp+40h] [rbp-48h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v11 = off_A9E90;
  v12 = 0;
  v13 = a1;
  do
  {
    v8 = a1[40];
    v9 = *(__int64 (__fastcall **)(__int64, __int64, int, __int64))(*(_QWORD *)v8 + 24LL);
    if ( v9 == sub_23F80 )
    {
      v14[0] = &off_A9B78;
      v14[2] = v8;
      v15 = 0;
      v16 = &v11;
      v14[1] = a2;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64, __int64 (__fastcall **)(), __int64, _QWORD *))(*(_QWORD *)v8 + 16LL))(
             v8,
             a2,
             2,
             v14,
             a5,
             a6,
             v11,
             v12,
             v13);
      if ( v7 < 0 )
        return (unsigned int)v7;
      continue;
    }
    v7 = v9(v8, a2, 0, (__int64)&v11);
    if ( v7 < 0 )
      break;
  }
  while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, a2) );
  return (unsigned int)v7;
}

