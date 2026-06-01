char __fastcall dirtree_change_rank(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  char v10; // dl
  int v12; // [rsp+0h] [rbp-58h]
  int v13[2]; // [rsp+8h] [rbp-50h] BYREF
  int v14; // [rsp+10h] [rbp-48h]
  _TBYTE ptr; // [rsp+16h] [rbp-42h] BYREF
  __int64 v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-28h]

  *(_QWORD *)&ptr = -1;
  BYTE8(ptr) = 0;
  v7 = sub_775C40(
         a1,
         (int)v13,
         a3,
         a4,
         a5,
         a6,
         v12,
         a2,
         v14,
         *(void **)((char *)&ptr + 2),
         v16,
         __readfsqword(0x28u),
         v17);
  if ( v7 == -1 )
    return 5;
  v8 = v7;
  v9 = sub_7747C0(a1, v7, *(_QWORD *)v13);
  HIBYTE(v16) = v10;
  if ( v9 == -1 )
    return (v10 == 0) + 2;
  BYTE8(ptr) = v10;
  *(_QWORD *)&ptr = v9;
  sub_776DE0(a1, v8, &ptr, a3, a2);
  return 0;
}
