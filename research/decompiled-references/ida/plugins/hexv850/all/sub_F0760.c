__int64 __fastcall sub_F0760(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  _QWORD v18[5]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v19; // [rsp+28h] [rbp-50h]
  char v20; // [rsp+2Ah] [rbp-4Eh]
  _QWORD v21[5]; // [rsp+30h] [rbp-48h] BYREF
  char v22; // [rsp+58h] [rbp-20h]
  unsigned __int64 v23; // [rsp+68h] [rbp-10h]

  v23 = __readfsqword(0x28u);
  v18[0] = off_4B08A0;
  v19 = 0;
  v7 = a1[1];
  v18[4] = 0;
  v18[1] = v7;
  v8 = a1[2];
  v20 = 0;
  v18[2] = v8;
  v9 = a1[3];
  v10 = a1[4];
  v18[3] = v9;
  result = sub_119D40(v10, v18, a3, a4, a5, a6);
  if ( !(_DWORD)result && HIBYTE(v19) )
  {
    if ( v20 )
    {
      v16 = a1[4];
      v21[4] = 0;
      v21[0] = off_4B08C8;
      v17 = a1[1];
      v22 = 0;
      v21[1] = v17;
      v21[2] = a1[2];
      v21[3] = a1[3];
      return sub_119D40(v16, v21, v12, v13, v14, v15);
    }
  }
  return result;
}

