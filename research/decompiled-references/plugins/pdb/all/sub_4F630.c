__int64 __fastcall sub_4F630(__int64 a1, __int64 a2, __int64 **a3, unsigned int *a4, double a5, double a6, double a7)
{
  __int64 *v9; // rax
  __int64 (__fastcall *v11)(__int64, __int64 *); // rax
  const char **v12; // rax
  const char *v13; // r15
  size_t v14; // rax
  size_t v15; // rbx
  __int64 **v16; // rbx
  const char *v17; // rdx
  unsigned int v18; // ebp
  void (__fastcall *v19)(void *); // rax
  void *v21; // rdi
  size_t v22; // rdx
  size_t v23; // [rsp+0h] [rbp-70h]
  void *dest; // [rsp+18h] [rbp-58h] BYREF
  __int128 v25; // [rsp+20h] [rbp-50h]
  unsigned __int64 v26; // [rsp+30h] [rbp-40h]

  v9 = *a3;
  v26 = __readfsqword(0x28u);
  v25 = 0;
  dest = nullptr;
  v11 = (__int64 (__fastcall *)(__int64, __int64 *))v9[18];
  if ( v11 == sub_2D280 )
  {
    v12 = (const char **)sub_2CEC0(a3[2], 0x10000000, 0x10000000u, 0x10000000);
    if ( v12 )
    {
      v13 = *v12;
      if ( *v12 && (v14 = strlen(*v12), (v15 = v14) != 0) )
      {
        v21 = dest;
        v22 = v14 + 1;
        if ( *((_QWORD *)&v25 + 1) < v14 + 1 )
        {
          v23 = v14 + 1;
          dest = (void *)qvector_reserve(&dest, dest, v22, 1);
          v22 = v23;
          v21 = dest;
        }
        *(_QWORD *)&v25 = v22;
        memmove(v21, v13, v15);
        *((_BYTE *)dest + v15) = 0;
      }
      else
      {
        *(_QWORD *)&v25 = 0;
      }
    }
  }
  else
  {
    v11((__int64)a3, (__int64 *)&dest);
  }
  v16 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 128LL))(
                      *(_QWORD *)(a1 + 320),
                      0,
                      0);
  if ( ((unsigned int (__fastcall *)(__int64 **, __int64 **))(*a3)[31])(a3, v16) )
  {
    v18 = 0;
  }
  else
  {
    v17 = src;
    if ( (_QWORD)v25 )
      v17 = (const char *)dest;
    v18 = sub_4E7E0(a1, a2, v17, v16, 0, a4, 0.0, a6, a7);
  }
  if ( v16 )
  {
    v19 = (void (__fastcall *)(void *))(*v16)[37];
    if ( v19 == sub_243F0 )
      operator delete(v16, 0x18u);
    else
      v19(v16);
  }
  if ( dest )
  {
    *(_QWORD *)&v25 = 0;
    qfree(dest);
  }
  return v18;
}
