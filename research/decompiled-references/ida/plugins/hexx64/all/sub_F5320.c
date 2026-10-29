__int64 __fastcall sub_F5320(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _BYTE *v5; // rdi
  __int64 result; // rax
  _BYTE *v7; // rdi
  __int64 v8; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v10; // [rsp+28h] [rbp-50h]
  char v11; // [rsp+2Ah] [rbp-4Eh]
  _QWORD v12[5]; // [rsp+30h] [rbp-48h] BYREF
  char v13; // [rsp+58h] [rbp-20h]
  unsigned __int64 v14; // [rsp+68h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v9[0] = &off_4DCEC0;
  v10 = 0;
  v2 = a1[1];
  v9[4] = 0;
  v9[1] = v2;
  v3 = a1[2];
  v11 = 0;
  v9[2] = v3;
  v4 = a1[3];
  v5 = (_BYTE *)a1[4];
  v9[3] = v4;
  result = sub_11E900(v5, (__int64)v9);
  if ( !(_DWORD)result && HIBYTE(v10) )
  {
    if ( v11 )
    {
      v7 = (_BYTE *)a1[4];
      v12[4] = 0;
      v12[0] = &off_4DCEE8;
      v8 = a1[1];
      v13 = 0;
      v12[1] = v8;
      v12[2] = a1[2];
      v12[3] = a1[3];
      return sub_11E900(v7, (__int64)v12);
    }
  }
  return result;
}

