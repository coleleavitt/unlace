__int64 __fastcall sub_96D10(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  const char *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  char *v15; // r8
  char *v16; // r8
  unsigned __int16 v17; // [rsp+6h] [rbp-42h] BYREF
  __int64 v18; // [rsp+8h] [rbp-40h] BYREF
  __int64 v19[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 256);
  v5 = *a3;
  v19[1] = __readfsqword(0x28u);
  v19[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int16 *, __int64 *))(v4 + 200))(v5, &v17, v19) )
  {
    v7 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 256) + 464LL))(v19[0]);
    sub_1D740((__int64)"ERROR: %s\n", v7);
  }
  if ( v17 <= 0x21u )
  {
    if ( ((1LL << v17) & 0x88E0) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 256);
      v13 = *a3;
      v19[0] = 0;
      if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *))(v12 + 264))(v13, &v18, v19) )
      {
        v15 = sub_81C40(a1);
        sub_95A30(
          v19[0],
          (__int64)"die.cpp",
          1184,
          (__int64)"Error retrieving attribute value of type udata for DIE %s",
          v15);
      }
      v14 = v18;
      *(_BYTE *)(a2 + 8) = 0;
      *(_QWORD *)a2 = v14;
      return 1;
    }
    if ( ((1LL << v17) & 0x200002000LL) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 256);
      v9 = *a3;
      v19[0] = 0;
      if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *))(v8 + 272))(v9, &v18, v19) )
      {
        v16 = sub_81C40(a1);
        sub_95A30(
          v19[0],
          (__int64)"die.cpp",
          1195,
          (__int64)"Error retrieving attribute value of type sdata for DIE %s",
          v16);
      }
      v10 = v18;
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = v10;
      return 1;
    }
  }
  return 0;
}

