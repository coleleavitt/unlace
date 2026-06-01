__int64 __fastcall sub_1FEE0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rax
  unsigned int v4; // eax
  _DWORD *v5; // rcx
  __int64 v7; // rbx
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8[0] = *(unsigned __int16 *)(v7 + 468);
    netnode_supset(*(_QWORD *)(v7 + 152), -1, v8, 8, 65);
    v8[0] = 1;
    netnode_supset(*(_QWORD *)(v7 + 152), -2, v8, 8, 65);
    return 0;
  }
  if ( (unsigned __int64)(a2 - 11) <= 0x35 )
  {
    v3 = 1LL << ((unsigned __int8)a2 - 11);
    if ( (v3 & 0x200000D5A00000LL) != 0 )
    {
LABEL_8:
      invalidate_regfinder_cache(-1, -1, 0);
      return 0;
    }
    if ( (v3 & 1) != 0 )
    {
      v4 = *a3;
      if ( *a3 > 0x2F )
      {
        v5 = *((_DWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v5 + 2;
      }
      else
      {
        v5 = (_DWORD *)(*((_QWORD *)a3 + 2) + v4);
        *a3 = v4 + 8;
      }
      sub_1FCD0(*(_QWORD *)(a1 + 16), *v5 != 0);
      goto LABEL_8;
    }
  }
  return 0;
}
