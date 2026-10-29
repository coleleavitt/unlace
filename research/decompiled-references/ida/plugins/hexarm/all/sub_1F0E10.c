__int64 __fastcall sub_1F0E10(__int64 *a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v6; // r12d
  __int64 v8; // rax
  int v9; // [rsp+4h] [rbp-64h] BYREF
  __int64 v10; // [rsp+8h] [rbp-60h] BYREF
  __int64 v11; // [rsp+10h] [rbp-58h] BYREF
  char v12; // [rsp+18h] [rbp-50h]
  int v13; // [rsp+1Ch] [rbp-4Ch]
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 8) != 5 )
  {
    if ( !under_debugger )
      sub_3835A0(51893);
    BUG();
  }
  v10 = *a1;
  v9 = *((_DWORD *)a1 + 3);
  v14[0] = a2 + 816;
  v15 = *(_QWORD *)(a2 + 816);
  v14[1] = v15;
  v6 = sub_227DD0(v14, &v10, &v9, a2);
  if ( (_BYTE)v6 && (a3 || (v12 = 5, v11 = v10, v13 = v9, sub_1F0CB0(a2, (__int64)&v11, a4))) )
  {
    v8 = v10;
    *((_BYTE *)a1 + 8) = 5;
    *a1 = v8;
    *((_DWORD *)a1 + 3) = v9;
  }
  else
  {
    return 0;
  }
  return v6;
}

