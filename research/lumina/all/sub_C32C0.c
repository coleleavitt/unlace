unsigned __int64 __fastcall sub_C32C0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 16);
  v9 = __readfsqword(0x28u);
  if ( v5 )
  {
    sub_C32C0(v5, a2, &v8);
    *(_QWORD *)(v8 + 8) = a1;
    v6 = *(_QWORD *)(a1 + 8);
    if ( !v6 )
      goto LABEL_3;
LABEL_6:
    sub_C32C0(v6, a1 + 8, a3);
    return __readfsqword(0x28u) ^ v9;
  }
  *a2 = a1;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
    goto LABEL_6;
LABEL_3:
  *a3 = a1;
  return __readfsqword(0x28u) ^ v9;
}
