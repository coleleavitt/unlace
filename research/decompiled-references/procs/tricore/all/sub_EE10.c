unsigned __int64 __fastcall sub_EE10(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  bool v4; // zf
  __int64 v5; // rax
  __int64 dtype_size; // rax
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v3 = *(unsigned __int16 *)(a2 + 6);
  v4 = *(_BYTE *)(a2 + 1) == 1;
  v11 = __readfsqword(0x28u);
  v10 = 0;
  if ( !v4 )
    goto LABEL_2;
  dtype_size = get_dtype_size(*(unsigned __int8 *)(a2 + 5), a2, a3);
  if ( dtype_size == 8 )
  {
    if ( (unsigned __int16)v3 <= 0xFu )
    {
      v8 = v3;
      v9 = 101;
    }
    else
    {
      v8 = v3 - 16;
      v9 = 112;
      if ( (unsigned int)(v3 - 16) > 0xF )
      {
        v9 = 0;
        v8 = 0;
        goto LABEL_14;
      }
    }
    if ( (v8 & 1) != 0 )
      goto LABEL_2;
LABEL_14:
    qsnprintf(&v10, 8, "%c%d", v9, v8);
    goto LABEL_15;
  }
  if ( (unsigned __int16)v3 <= 0xFu && dtype_size == 16 && (v3 & 3) == 0 )
  {
    qsnprintf(&v10, 8, "q%d", v3);
LABEL_15:
    (*(void (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 56LL))(a1, &v10, 33);
    return v11 - __readfsqword(0x28u);
  }
LABEL_2:
  v5 = a1[78];
  if ( *(_DWORD *)(v5 + 64) > (int)v3 )
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8 * v3), 33);
  else
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 40LL))(a1, 63, 2);
  return v11 - __readfsqword(0x28u);
}
