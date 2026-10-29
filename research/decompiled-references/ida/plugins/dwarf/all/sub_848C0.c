__int64 __fastcall sub_848C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  int v12; // edx
  __int64 result; // rax
  _BYTE v14[8]; // [rsp+0h] [rbp-70h] BYREF
  __int128 v15; // [rsp+8h] [rbp-68h] BYREF
  __int128 v16; // [rsp+18h] [rbp-58h] BYREF
  _QWORD v17[9]; // [rsp+28h] [rbp-48h] BYREF

  v9 = *(_QWORD *)(a5 + 40);
  v10 = *(_QWORD *)(a1 + 16);
  v17[1] = __readfsqword(0x28u);
  v17[0] = 0;
  v15 = 0;
  v16 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, __int128 *, char *, __int128 *, char *, _BYTE *))(v10 + 128))(
          v9,
          0,
          v17,
          &v15,
          (char *)&v15 + 8,
          &v16,
          (char *)&v16 + 8,
          v14);
  result = 0;
  if ( !v12 )
    result = (**(__int64 (__fastcall ***)(__int64, __int64, __int64, __int128 *, __int64))a1)(a1, a2, a4, &v15, a6);
  *a3 |= 1u;
  return result;
}

