__int64 __fastcall sub_27990(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ebx
  __int64 ph; // rdx
  __int64 v5; // rax
  const char *v6; // r13
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r12
  const char *v10; // rdx
  void *v12; // [rsp+0h] [rbp-78h]
  char s[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v2 = sub_278C0(a1, a2);
  if ( v2 < 0 )
    return 0;
  v3 = v2;
  ph = get_ph();
  v5 = qword_6AC10 + 144LL * v3;
  if ( *(_DWORD *)(v5 + 120) != *(_DWORD *)(ph + 4) )
  {
    v6 = ::s;
    if ( *(_QWORD *)(v5 + 56) )
      v6 = *(const char **)(v5 + 48);
    if ( !getinf_buf() )
      s[0] = 0;
    v7 = strlen(s);
    v8 = v7 + 1;
    v9 = v7;
    v12 = (void *)qvector_reserve();
    memmove(v12, s, v9);
    v10 = ::s;
    *((_BYTE *)v12 + v9) = 0;
    if ( v8 )
      v10 = (const char *)v12;
    if ( (unsigned int)sub_E8D0(
                         0,
                         (__int64)"HIDECANCEL\n"
                                  "Current processor is '%s' but the remote stub expects '%s'.\n"
                                  "Please check that the correct GDB configuration was chosen.\n"
                                  "Do you want to continue?",
                         v10,
                         v6) != 1 )
    {
      if ( v12 )
        qfree();
      return 0;
    }
    if ( v12 )
      qfree();
  }
  *(_DWORD *)(a1 + 1176) = v3;
  return 1;
}

