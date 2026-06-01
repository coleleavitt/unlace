__int64 __fastcall sub_56870(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 **v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rax
  const void *v11; // r12
  size_t v12; // rax
  size_t v13; // rbx
  void *v14; // rdi
  size_t v15; // r13
  __int64 v16; // rax
  _UNKNOWN **v17; // [rsp+0h] [rbp-48h] BYREF
  __int128 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 40);
  v19 = __readfsqword(0x28u);
  switch ( v4 )
  {
    case 2:
      v9 = *(_QWORD *)(a3 + 224);
      if ( (v9 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        goto LABEL_16;
      break;
    case 3:
      return 2;
    case 1:
      v5 = *(__int64 ***)(a1 + 16);
      v17 = &off_C8440;
      if ( (*(_QWORD *)(a3 + 224) & 0x7FFFFFFFFFFFFFFFLL) != 0 && *(_QWORD *)(a3 + 224) != -1 )
      {
        v6 = sub_561C0(v5, (__int64 *)(a3 + 224), (unsigned __int8 (__fastcall ***)(_QWORD, _QWORD *))&v17);
        if ( v6 && *((_DWORD *)v6 + 68) != 3 )
        {
          if ( v6[44] > 1u )
          {
            sub_85010(a2, v6[43]);
            return 0;
          }
          else
          {
            v17 = nullptr;
            v7 = *(_QWORD *)(v3 + 24);
            v18 = 0;
            (*(void (__fastcall **)(_QWORD *, _UNKNOWN ***, __int64))(*v6 + 24LL))(v6, &v17, v7);
            sub_85010(a2, v17);
            if ( v17 )
            {
              *(_QWORD *)&v18 = 0;
              qfree(v17);
            }
            return 0;
          }
        }
        return 1;
      }
      break;
    default:
      return 1;
  }
  do
  {
    if ( under_debugger )
      BUG();
    a1 = 30478;
    v9 = interr(30478);
LABEL_16:
    ;
  }
  while ( v9 == -1 );
  v10 = sub_561C0(*(__int64 ***)(a1 + 16), (__int64 *)(a3 + 224), nullptr);
  if ( !v10 || v10[44] <= 1u )
    return 1;
  v11 = (const void *)v10[43];
  if ( v11 && (v12 = strlen((const char *)v10[43]), (v13 = v12) != 0) )
  {
    v14 = (void *)*a2;
    v15 = v12 + 1;
    if ( a2[2] < v12 + 1 )
    {
      v16 = qvector_reserve(a2, *a2, v12 + 1, 1);
      *a2 = v16;
      v14 = (void *)v16;
    }
    a2[1] = v15;
    memmove(v14, v11, v13);
    *(_BYTE *)(*a2 + v13) = 0;
    return 0;
  }
  else
  {
    a2[1] = 0;
    return 0;
  }
}
