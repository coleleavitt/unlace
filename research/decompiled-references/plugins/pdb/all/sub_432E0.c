__int64 __fastcall sub_432E0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 (__fastcall ***a5)(_QWORD, __int64 **))
{
  __int64 v7; // rbx
  int v8; // ebp
  __int64 (__fastcall *v9)(__int64, int *); // rax
  int *v10; // rax
  int v11; // eax
  void (__fastcall *v12)(void *); // rax
  __int64 v13; // rax
  __int64 **v14; // r14
  void (__fastcall *v15)(void *); // rax
  int v18; // [rsp+2Ch] [rbp-4Ch] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v13 = sub_42C40(a1, *(_DWORD *)(a2 + 4 * v7));
    v19 = v13;
    v14 = (__int64 **)v13;
    if ( !a4 )
      break;
    v9 = *(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 184LL);
    if ( v9 == sub_2DCC0 )
    {
      v10 = (int *)sub_2CEC0(v14[2], 0x100000, 0x400u, 0x4000000);
      if ( !v10 )
        goto LABEL_7;
      v11 = *v10;
      v18 = v11;
    }
    else
    {
      if ( (unsigned int)v9((__int64)v14, &v18) )
        goto LABEL_7;
      v11 = v18;
    }
    if ( v11 == a4 )
      break;
LABEL_7:
    if ( v14 )
    {
      v12 = (void (__fastcall *)(void *))(*v14)[37];
      if ( v12 == sub_243F0 )
        operator delete(v14, 0x18u);
      else
        v12(v14);
    }
    if ( a3 == ++v7 )
      return (unsigned int)v8;
  }
  v8 = (**a5)(a5, v14);
  if ( v8 >= 0 )
    goto LABEL_7;
  if ( v14 )
  {
    v15 = (void (__fastcall *)(void *))(*v14)[37];
    if ( v15 == sub_243F0 )
      operator delete(v14, 0x18u);
    else
      v15(v14);
  }
  return (unsigned int)v8;
}
