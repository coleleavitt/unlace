_QWORD *__fastcall sub_106840(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // rbp
  __int64 *v3; // rbx
  __int64 i; // rax
  _QWORD *result; // rax
  _QWORD *v6; // rsi
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  __int64 v11; // rax

  v2 = a2;
  v3 = (__int64 *)(*a2 & 0xFFFFFFFFFFFFFFFCLL);
  for ( i = *v3; (*v3 & 2) == 0; i = *v3 )
  {
    if ( (i & 1) == 0 )
      break;
    v6 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCLL);
    v7 = *(__int64 **)((i & 0xFFFFFFFFFFFFFFFCLL) + 8);
    if ( v7 == v3 )
    {
      v10 = (_QWORD *)v6[2];
      if ( (*v10 & 2) == 0 && (*v10 & 1) != 0 )
      {
        v2 = (__int64 *)(i & 0xFFFFFFFFFFFFFFFCLL);
        *v3 = i & 0xFFFFFFFFFFFFFFFELL;
        *v10 &= ~1uLL;
        v9 = *v6 | 1LL;
        *v6 = v9;
      }
      else
      {
        if ( (__int64 *)v3[2] == v2 )
        {
          v2 = v3;
          sub_1066C0(a1, (unsigned __int64)v3);
          v11 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
          v3 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
          v6 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
        }
        else
        {
          v11 = *v3;
        }
        *v3 = v11 & 0xFFFFFFFFFFFFFFFELL;
        *v6 |= 1uLL;
        sub_106780(a1, (unsigned __int64)v6);
        v9 = *v2;
      }
    }
    else if ( (*v7 & 2) != 0 || (*v7 & 1) == 0 )
    {
      if ( (__int64 *)v3[1] == v2 )
      {
        v2 = v3;
        sub_106780(a1, (unsigned __int64)v3);
        v8 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v3 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v6 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
      }
      else
      {
        v8 = *v3;
      }
      *v3 = v8 & 0xFFFFFFFFFFFFFFFELL;
      *v6 |= 1uLL;
      sub_1066C0(a1, (unsigned __int64)v6);
      v9 = *v2;
    }
    else
    {
      v2 = (__int64 *)(i & 0xFFFFFFFFFFFFFFFCLL);
      *v3 = i & 0xFFFFFFFFFFFFFFFELL;
      *v7 &= ~1uLL;
      v9 = *v6 | 1LL;
      *v6 = v9;
    }
    v3 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
  }
  result = (_QWORD *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

