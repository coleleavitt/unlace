unsigned __int64 __fastcall sub_65CE0(__int64 *a1, __int64 (__fastcall ***a2)(_QWORD, _QWORD, _QWORD), char a3)
{
  unsigned int *v3; // rbp
  __int64 v5; // rax
  int v7; // ebx
  _DWORD *v8; // rcx
  _DWORD *v9; // rax
  unsigned int *v10; // rdi
  __int64 v11; // rcx
  __int128 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-58h]
  __int128 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v3 = (unsigned int *)*a1;
  v16 = __readfsqword(0x28u);
  v14 = 0;
  v5 = 4 * a1[1];
  v15 = 0;
  if ( v5 )
  {
    do
    {
      v7 = (**a2)(a2, *v3, 0);
      if ( v7 == -1 )
      {
        if ( a3 )
        {
          if ( !under_debugger )
            sub_3835A0(51920);
          BUG();
        }
      }
      else
      {
        v8 = (_DWORD *)(v14 + 4 * v15);
        if ( (_DWORD *)v14 == v8 )
          goto LABEL_16;
        v9 = (_DWORD *)v14;
        while ( v7 != *v9 )
        {
          if ( v8 == ++v9 )
            goto LABEL_16;
        }
        if ( v9 == v8 )
        {
LABEL_16:
          if ( *((_QWORD *)&v15 + 1) < (unsigned __int64)(v15 + 1) )
          {
            v14 = qvector_reserve();
            v8 = (_DWORD *)(v14 + 4 * v15);
          }
          *v8 = v7;
          *(_QWORD *)&v15 = v15 + 1;
        }
      }
      v10 = (unsigned int *)*a1;
      ++v3;
    }
    while ( v3 != (unsigned int *)(*a1 + 4 * a1[1]) );
    v11 = v14;
    v12 = v15;
  }
  else
  {
    v12 = 0u;
    v10 = (unsigned int *)*a1;
    v11 = 0;
  }
  *a1 = v11;
  *(_OWORD *)(a1 + 1) = v12;
  if ( v10 )
    qfree();
  return v16 - __readfsqword(0x28u);
}

