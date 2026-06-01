__int64 __fastcall sub_3EC5A0(__int64 a1, __int32 a2, double a3)
{
  unsigned int v3; // r12d
  char v4; // al
  int dtype_size; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = sub_3EC1D0(a1, a2, 1, a3);
  if ( v3 != -1 )
  {
    v4 = *(_BYTE *)(a1 + 40LL * a2 + 65);
    if ( ((unsigned __int8)(v4 - 2) <= 2u || (unsigned __int8)(v4 - 6) <= 1u) && *(_BYTE *)(a1 + 40LL * a2 + 69) != 9 )
    {
      dtype_size = get_dtype_size();
      v6 = *(_QWORD *)(a1 + 832);
      v7 = *(_QWORD *)(v6 + 584);
      if ( !v7 )
        sub_3E4140(a3);
      v8 = (int)v3;
      v9 = *(int *)(*(_QWORD *)(v6 + 576) + 4 * v7 - 4);
      *(_QWORD *)(v6 + 584) = v7 - 1;
      v3 = v9;
      sub_3E8420(
        a1,
        2u,
        dtype_size,
        *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
        v8,
        v9,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
    }
  }
  return v3;
}

