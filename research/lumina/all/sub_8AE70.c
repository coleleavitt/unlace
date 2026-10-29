__int64 __fastcall sub_8AE70(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebp
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-38h] BYREF
  char v8; // [rsp+8h] [rbp-30h]
  int v9; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v9 = a2;
  v8 = 56;
  v7 = off_2385A8;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v7);
  v5 = sub_8ACB0((_QWORD *)(a1 + 40), v2, 10, nullptr, v3, v4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  nullsub_48(&v7);
  return v5;
}
