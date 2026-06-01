__int64 __fastcall sub_392B0(__int64 a1, int a2)
{
  unsigned __int8 *v2; // rdx
  int v3; // eax
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v7; // rax
  const char *v8; // rax

  v2 = *(unsigned __int8 **)(a1 + 64);
  if ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 72) )
    goto LABEL_7;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v3 < 0 )
  {
LABEL_13:
    v7 = *(_QWORD *)a1;
    v5 = -1;
    *(_BYTE *)(a1 + 250) = 1;
    v8 = (const char *)(*(__int64 (__fastcall **)(__int64))(v7 + 56))(a1);
    sub_38E60(a1, 0, (__int64)"GDB: network error: %s\n", v8);
    return v5;
  }
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 48LL))(
           a1,
           *(_QWORD *)(a1 + 56),
           *(_QWORD *)(a1 + 48));
    if ( !v4 )
    {
      v5 = -3;
      sub_38E60(a1, 0, (__int64)"GDB: network connection closed by peer\n");
      return v5;
    }
    if ( v4 >= 0 )
    {
      v2 = *(unsigned __int8 **)(a1 + 56);
      *(_QWORD *)(a1 + 72) = &v2[v4];
LABEL_7:
      *(_QWORD *)(a1 + 64) = v2 + 1;
      v5 = *v2;
      sub_39080(a1, 2, *v2);
      return v5;
    }
    goto LABEL_13;
  }
  if ( byte_6ACE8 != 1 && a2 )
    sub_38E60(a1, 0, (__int64)"GDB: network timeout (after %d milliseconds)\n", a2);
  return (unsigned int)-2;
}

