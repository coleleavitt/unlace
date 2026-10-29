__int64 __fastcall sub_59DF0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 result; // rax
  __int64 v8; // r13
  int next; // eax
  _QWORD *v10; // r14
  size_t v11; // rax
  size_t v12; // r15
  size_t v13; // rbx
  bool v14; // zf
  __int64 v15; // [rsp+18h] [rbp-500h]
  void *v16; // [rsp+20h] [rbp-4F8h] BYREF
  __int128 v17; // [rsp+28h] [rbp-4F0h]
  __int16 v18; // [rsp+40h] [rbp-4D8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-4D0h]
  int v20; // [rsp+50h] [rbp-4C8h]
  __int64 v21; // [rsp+58h] [rbp-4C0h]
  int v22; // [rsp+60h] [rbp-4B8h]
  __int64 v23; // [rsp+68h] [rbp-4B0h]
  __int128 v24; // [rsp+70h] [rbp-4A8h]
  int v25; // [rsp+88h] [rbp-490h]
  char *v26; // [rsp+90h] [rbp-488h]
  char *v27; // [rsp+98h] [rbp-480h]
  char s[1032]; // [rsp+A0h] [rbp-478h] BYREF
  unsigned __int64 v29; // [rsp+4A8h] [rbp-70h]
  char v30; // [rsp+4B0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+4C0h] [rbp-58h]

  v31 = a3;
  v29 = __readfsqword(0x28u);
  v25 = 16;
  v26 = &a7;
  v27 = &v30;
  result = 0;
  if ( a2 == 1 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v25 = 24;
    v23 = 0;
    v22 = 0;
    v19 = 0;
    v21 = 0;
    v24 = 0;
    while ( 1 )
    {
      next = idt_get_next();
      if ( next )
        break;
      v18 = *(_DWORD *)(v15 + 20);
      v20 = *(_DWORD *)(v15 + 16);
      qsnprintf();
      v10 = *(_QWORD **)(v8 + 8);
      v16 = nullptr;
      v17 = 0;
      v11 = strlen(s);
      v12 = v11 + 1;
      v13 = v11;
      v16 = (void *)qvector_reserve();
      *(_QWORD *)&v17 = v12;
      memmove(v16, s, v13);
      *((_BYTE *)v16 + v13) = 0;
      sub_59AB0(v10, (__int64)&v16, (__int64)&v18);
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
    }
    v14 = next == 4;
    result = 35;
    if ( v14 )
      return 0;
  }
  return result;
}

