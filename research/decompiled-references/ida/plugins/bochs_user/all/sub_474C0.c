__int64 __fastcall sub_474C0(__int64 a1, double a2, double a3, double a4, double a5)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  _QWORD *v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v12 = 0;
  v13 = 0;
  v6 = *(_QWORD *)(a1 + 56);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(v6 + 8230) = 1;
  sub_30020(&v12, *(_BYTE *)(*(_QWORD *)(a1 + 56) + 8230LL), "BOCHS");
  if ( (_QWORD)v13 )
  {
    *(_BYTE *)a1 = 0;
    v8 = *(_QWORD **)(a1 + 48);
    *(_QWORD *)(a1 + 16) = 0;
    sub_3BA30(v8, 0x10000);
    v9 = sub_4D1F0(a1 + 64, 768);
    v10 = a1 + 64;
    v7 = sub_46CC0(a1, &v12, 0, 0.0, a3, a4, a5);
    sub_4D1F0(v10, v9);
  }
  else
  {
    is_miniidb();
    sub_45250(a1);
    v7 = 13;
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v7;
}

