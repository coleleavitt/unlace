__int64 __fastcall sub_14160(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // eax
  __int64 *v5; // rcx
  _BYTE v6[2]; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( a2 == 86 )
  {
    sub_319A0((__int64)v6);
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + 706LL) = v6[1];
  }
  else if ( a2 == 94 )
  {
    v4 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v5 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v5 + 1;
    }
    else
    {
      v5 = (__int64 *)(*((_QWORD *)a3 + 2) + v4);
      *a3 = v4 + 8;
    }
    sub_31A30(*v5);
  }
  return 0;
}

