__int64 __fastcall sub_29D40(
        __int64 a1,
        int a2,
        __int64 a3,
        void (__fastcall ***a4)(_QWORD, __int64, __int64, _BYTE *, __int64 *))
{
  unsigned __int64 v5; // rdx
  int v6; // esi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 generic_linput; // rax
  unsigned int v16; // ebp
  unsigned __int64 v18; // [rsp+18h] [rbp-4A0h]
  __int64 v19; // [rsp+28h] [rbp-490h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-488h]
  __int128 v21; // [rsp+38h] [rbp-480h]
  __int64 v22; // [rsp+50h] [rbp-468h] BYREF
  __int128 v23; // [rsp+58h] [rbp-460h]
  _BYTE v24[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v25; // [rsp+478h] [rbp-40h]

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 20) * a2;
  v25 = __readfsqword(0x28u);
  v21 = 0;
  v20 = 0;
  v8 = (unsigned int)(3 * v6);
  if ( 3 * v6 )
  {
    v20 = qvector_reserve();
    memset((void *)(v20 + v21), 0, v8 - v21);
    *(_QWORD *)&v21 = (unsigned int)(3 * v6);
    v5 = v20;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         a3,
         v5,
         v8,
         0);
  v10 = (__int64 *)v20;
  if ( v8 == v9 )
  {
    v18 = v20 + v8;
    if ( v20 >= v20 + v8 )
    {
      v16 = 1;
    }
    else
    {
      v11 = *(int *)(a1 + 20);
      do
      {
        if ( (_DWORD)v11 == 8 )
        {
          v12 = *v10;
          v13 = v10[1];
        }
        else
        {
          v12 = *(unsigned int *)v10;
          v13 = *(unsigned int *)((char *)v10 + v11);
        }
        memset(v24, 0, 0x400u);
        (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
          *(_QWORD *)(a1 + 8),
          v13,
          v24,
          1024,
          0);
        v19 = 0;
        v24[1023] = 0;
        v22 = 0;
        v23 = 0;
        v14 = operator new(0x28u);
        *(_QWORD *)v14 = &off_8C210;
        *(_QWORD *)(v14 + 24) = v12;
        *(_QWORD *)(v14 + 32) = a1;
        *(_QWORD *)(v14 + 8) = 0xFFFFFFFFLL;
        *(_DWORD *)(v14 + 16) = 0;
        generic_linput = create_generic_linput();
        if ( generic_linput )
        {
          sub_29210((__int64 *)a1, nullptr, &v19, &v22, generic_linput, v12);
          close_linput();
        }
        (**a4)(a4, v12, v19, v24, &v22);
        if ( v22 )
        {
          *(_QWORD *)&v23 = 0;
          qfree();
        }
        v11 = *(int *)(a1 + 20);
        v10 = (__int64 *)((char *)v10 + 3 * (int)v11);
      }
      while ( (unsigned __int64)v10 < v18 );
      v10 = (__int64 *)v20;
      v16 = 1;
    }
  }
  else
  {
    v16 = 0;
  }
  if ( v10 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v16;
}

