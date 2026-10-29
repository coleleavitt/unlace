__int64 __fastcall sub_1F0A50(__int64 *a1, __int64 a2, char a3, __int64 a4, double a5)
{
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 v10; // rax
  int v11; // [rsp+4h] [rbp-64h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  char v14; // [rsp+18h] [rbp-50h]
  int v15; // [rsp+1Ch] [rbp-4Ch]
  _QWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 8) != 5 )
  {
    if ( !under_debugger )
      sub_383060(0xCAB5u, a5);
    BUG();
  }
  v12 = *a1;
  v11 = *((_DWORD *)a1 + 3);
  v16[0] = a2 + 816;
  v17 = *(_QWORD *)(a2 + 816);
  v16[1] = v17;
  LOBYTE(v7) = sub_227A10((__int64)v16, &v12, &v11, a2);
  v8 = v7;
  if ( (_BYTE)v7 && (a3 || (v14 = 5, v13 = v12, v15 = v11, sub_1F08F0(a2, (__int64)&v13, a4))) )
  {
    v10 = v12;
    *((_BYTE *)a1 + 8) = 5;
    *a1 = v10;
    *((_DWORD *)a1 + 3) = v11;
  }
  else
  {
    return 0;
  }
  return v8;
}

