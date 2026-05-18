__int64 __fastcall sub_93EE0(__int64 a1, _QWORD *a2)
{
  char *v2; // rbx
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebp
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-48h] BYREF
  __int16 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v7 = off_238A88;
  v8 = 82;
  v2 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(
                 a1 + 40,
                 &v7);
  v5 = sub_8ACB0((_QWORD *)(a1 + 40), (__int64)v2, 83, nullptr, v3, v4);
  if ( !v5 )
    sub_93E20(a2, v2 + 16);
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  nullsub_49(&v7);
  return v5;
}
