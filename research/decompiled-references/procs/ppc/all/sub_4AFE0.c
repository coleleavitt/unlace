__int64 __fastcall sub_4AFE0(int a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned __int16 v5; // ax
  char v6; // dl
  __int64 v7; // rax
  __int16 v8; // [rsp+4h] [rbp-24h] BYREF
  __int16 v9; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a1 == 8 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 72))(a2);
    v4 = v3;
    if ( *(_QWORD *)(v3 + 448) != -1 )
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 8))(a2, 7, v3 + 448);
    v5 = *(_WORD *)(v4 + 464);
    if ( v5 != 0xFFFF )
    {
      v6 = *(_WORD *)(v4 + 464);
      v9 = v5 >> 4;
      v7 = *a2;
      v8 = v6 & 0xF;
      (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(v7 + 8))(a2, 4, &v8);
      (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(*a2 + 8))(a2, 5, &v9);
    }
  }
  return 1;
}
