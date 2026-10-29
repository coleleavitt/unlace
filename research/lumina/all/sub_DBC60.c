__int64 __fastcall sub_DBC60(__int64 a1, _BYTE *a2, __int64 a3, double a4)
{
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-90h]
  _QWORD v7[2]; // [rsp+10h] [rbp-88h] BYREF
  int v8; // [rsp+20h] [rbp-78h]
  int v9; // [rsp+24h] [rbp-74h]
  int v10; // [rsp+28h] [rbp-70h]
  __int16 v11; // [rsp+2Ch] [rbp-6Ch]
  char v12; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+78h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 136);
  v7[0] = a1;
  v8 = 70;
  v7[1] = &v12;
  v10 = 0;
  v9 = v4;
  v11 = 256;
  sub_D9E30((__int64)v7, a2, a3, a4);
  result = sub_DC130(v7);
  if ( (_BYTE)v11 == 7 && !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
  {
    v6 = result;
    sub_DBE60(a1);
    return v6;
  }
  return result;
}
