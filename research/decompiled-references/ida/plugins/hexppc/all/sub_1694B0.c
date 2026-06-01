__int64 __fastcall sub_1694B0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rdi
  __int64 v8[2]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+10h] [rbp-90h]
  __int128 v10; // [rsp+18h] [rbp-88h]
  _QWORD v11[3]; // [rsp+30h] [rbp-70h] BYREF
  char v12; // [rsp+48h] [rbp-58h]
  __int64 v13; // [rsp+50h] [rbp-50h]
  char v14; // [rsp+58h] [rbp-48h]
  __int64 v15; // [rsp+60h] [rbp-40h]
  __int64 v16; // [rsp+68h] [rbp-38h]
  int v17; // [rsp+70h] [rbp-30h]
  unsigned __int64 v18; // [rsp+78h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  v16 = a2;
  v17 = a4;
  v11[1] = 0;
  v11[2] = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v11[0] = off_4CAF00;
  v15 = a3;
  v8[0] = 0;
  v8[1] = 0;
  v9 = 0;
  v10 = 0;
  sub_1245A0(a1, v8, a3, 0);
  if ( (unsigned int)sub_126210((_QWORD *)a1, v8, *(_QWORD *)(a1 + 48), 0, (__int64)v11) || !*(_QWORD *)(a2 + 8) )
    goto LABEL_3;
  v5 = sub_60E40(v8);
  if ( !(_BYTE)v5 || (_QWORD)v10 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
    if ( !v7 )
    {
LABEL_3:
      v5 = 0;
      goto LABEL_4;
    }
    v5 = sub_178AA0(v7, (unsigned int)v8, *(_DWORD *)(a1 + 72), -1, 0, 0, 2, 1) ^ 1;
  }
LABEL_4:
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  qfree();
  return v5;
}

