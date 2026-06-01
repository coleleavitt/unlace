__int64 __fastcall sub_146E0(__int64 a1, __int64 a2, const char *a3, double a4)
{
  __int64 v4; // rax
  const char *v6; // r15
  __int64 v8; // r14
  char *v9; // rax
  __int64 v10; // rbx
  size_t v11; // r14
  __int64 v12; // rax
  unsigned int v13; // ebx
  char *v15; // rdi
  size_t v16; // rdx
  char *v17; // [rsp+10h] [rbp-78h] BYREF
  __int128 v18; // [rsp+18h] [rbp-70h]
  _QWORD v19[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v19[3] = __readfsqword(0x28u);
  if ( !v4 )
  {
    v6 = s1;
LABEL_14:
    v13 = 0;
    sub_CB10((__int64)"%a: could not parse the variable pseudo accessor '%s' (at position %u)\n", a4, a3, (_DWORD)v6);
    return v13;
  }
  v6 = *(const char **)a2;
  v8 = v4 - 1;
  v9 = strstr(*(const char **)a2, " : ");
  if ( !v9 || v9 - v6 == -1 )
    goto LABEL_14;
  v10 = v9 - v6 + 3;
  v17 = nullptr;
  v18 = 0;
  v11 = v8 - v10;
  if ( v11 )
  {
    v15 = nullptr;
    v16 = v11 + 1;
    if ( v11 != -1 )
    {
      v17 = (char *)qvector_reserve(&v17, 0, v16, 1);
      v16 = v11 + 1;
      v15 = v17;
    }
    *(_QWORD *)&v18 = v16;
    memmove(v15, &v6[v10], v11);
    v17[v11] = 0;
  }
  v12 = sub_14470(a1, &v17);
  if ( *(_DWORD *)(v12 + 68) == 1 )
  {
    if ( *(_BYTE *)(v12 + 24) )
    {
      v13 = apply_tinfo(a3, v12 + 24, 1);
      if ( !(_BYTE)v13 )
      {
        sub_CB10((__int64)"%a: could not apply the type '%s'\n", 0.0, a3);
        v13 = 0;
      }
      goto LABEL_10;
    }
    if ( (_QWORD)v18 )
      sub_CB10((__int64)"internal: no type info for '%s'\n", v17);
    else
      sub_CB10((__int64)"internal: no type info for '%s'\n", s1);
    goto LABEL_9;
  }
  sub_10F10((__int64)v19, v12, (__int64)&v17);
  sub_CB10((__int64)"%a: could not set %s\n", 0.0, a3);
  if ( !v19[0] )
  {
LABEL_9:
    v13 = 0;
    goto LABEL_10;
  }
  v19[1] = 0;
  v13 = 0;
  qfree(v19[0]);
LABEL_10:
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return v13;
}
