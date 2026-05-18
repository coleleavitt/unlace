__int64 __fastcall sub_115E20(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char *v4; // rbp
  __int64 result; // rax
  char *v6; // rdx
  unsigned int v7; // [rsp+Ch] [rbp-1Ch]

  if ( *(_BYTE *)(a1 + 85) )
  {
    sub_C7ED0(a1);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 48);
    return 0;
  }
  else
  {
    sub_C7ED0(a1);
    v3 = *(unsigned int *)(a1 + 64);
    *(_QWORD *)(a1 + 72) = v3;
    v4 = (char *)sub_D1E10(v3 + 17, a2);
    result = 7;
    if ( v4 )
    {
      result = sub_1159D0(a1, 0, *(_DWORD *)(a1 + 72), v4, 0);
      if ( (_DWORD)result )
      {
        v7 = result;
        sub_C91C0((__int64)v4, 0);
        return v7;
      }
      else
      {
        v6 = &v4[*(_QWORD *)(a1 + 72)];
        *(_OWORD *)v6 = 0;
        v6[16] = 0;
        *(_QWORD *)(a1 + 24) = v4;
      }
    }
  }
  return result;
}
