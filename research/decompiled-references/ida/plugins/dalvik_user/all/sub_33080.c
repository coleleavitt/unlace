__int64 __fastcall sub_33080(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-A0h]
  __int128 v14; // [rsp+10h] [rbp-98h]
  __int64 v15; // [rsp+20h] [rbp-88h]
  __int128 v16; // [rsp+28h] [rbp-80h]
  __int64 v17; // [rsp+38h] [rbp-70h]
  __int128 v18; // [rsp+40h] [rbp-68h]
  __int64 v19; // [rsp+50h] [rbp-58h]
  char v20; // [rsp+58h] [rbp-50h]
  char v21; // [rsp+60h] [rbp-48h]
  char v22; // [rsp+70h] [rbp-38h]
  unsigned __int64 v23; // [rsp+78h] [rbp-30h]

  v6 = a2[10];
  v7 = *a2;
  v23 = __readfsqword(0x28u);
  v20 = 0;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v22 = 0;
  v21 = a5;
  v12 = v7;
  v19 = v6;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  v9 = sub_135E0(a1, a2);
  v10 = sub_523F0(v9 + 864, a1, &v12, a3, a4);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v10;
}

