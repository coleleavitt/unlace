__int64 __fastcall sub_15F70(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  v10 = __readfsqword(0x28u);
  if ( *(_BYTE *)(v3 + 2216) )
  {
    v8 = 0;
    v9 = 0;
    get_segm_name();
    sub_EC40();
  }
  v5 = *a3;
  if ( *a3 >= a3[1] )
    return 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)a1;
    v8 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64))(v6 + 136))(a1, &v8, v5) )
    {
      result = sub_15BC0((__int64 *)a1, a2, v8);
      if ( (_DWORD)result )
        break;
    }
    v5 += *(unsigned int *)(a1 + 744);
    if ( v5 >= a3[1] )
      return 0;
  }
  return result;
}
