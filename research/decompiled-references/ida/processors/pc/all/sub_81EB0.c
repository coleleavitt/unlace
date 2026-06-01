__int64 __fastcall sub_81EB0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rax
  __int64 v6; // r12
  int v7; // ebp
  int v8; // r15d
  __int64 v9; // rax
  __int64 (__fastcall *v10)(_QWORD *, char); // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rsi
  const char *v15; // rcx
  __int64 segm_name; // rax
  char v17; // al
  __int64 ash; // rax
  int v19; // eax
  __int64 v20; // rax
  char *s1; // [rsp+0h] [rbp-D8h]
  char *s1a; // [rsp+0h] [rbp-D8h]
  bool v23; // [rsp+16h] [rbp-C2h]
  bool v24; // [rsp+17h] [rbp-C1h]
  unsigned __int64 v25; // [rsp+18h] [rbp-C0h]
  __int64 v26; // [rsp+20h] [rbp-B8h]
  __int64 v27; // [rsp+28h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-78h]
  __int64 v29; // [rsp+80h] [rbp-58h]
  unsigned __int64 v30; // [rsp+98h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( (getinf() & 0x200) == 0 )
    return v30 - __readfsqword(0x28u);
  v4 = a2[2];
  v5 = (_QWORD *)getseg();
  if ( !v5 )
    return v30 - __readfsqword(0x28u);
  v6 = 232;
  v7 = 29;
  v24 = *v5 == v4;
  v8 = (*(_DWORD *)(a1 + 4436) & 0x7D78F) == 0 ? 32 : 34;
  v23 = v4 != 0 && *v5 != v4;
  do
  {
    if ( v7 == 30 )
    {
      v6 += 8;
      v7 = 31;
    }
    if ( (unsigned __int8)get_sreg_range() && (!v23 || (unsigned __int8)get_sreg_range() != 1 || v24 || v29 != v28) )
    {
      s1 = (char *)get_segm_by_sel();
      v9 = *a2;
      if ( a2[4] <= 1u )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(v9 + 64))(a2, 27);
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a2 + 56LL))(a2, "assume ", 0);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(v9 + 56))(a2, ", ", 0);
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + v6),
        0);
      v10 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
      if ( v10 != sub_7D640 )
      {
        v10(a2, 58);
LABEL_15:
        if ( s1 && (s1[184] == 6 || !(unsigned __int8)is_spec_segm()) )
        {
          segm_name = get_segm_name();
          v15 = "nothing";
          if ( segm_name > 0 )
            v15 = ::s1;
          if ( s1[184] == 6 )
          {
            s1a = (char *)v15;
            v17 = getinf_flag();
            v15 = s1a;
            if ( !v17 )
            {
              ash = get_ash();
              v15 = s1a;
              if ( (*(_BYTE *)(ash + 328) & 8) != 0 )
              {
                v19 = strcmp(s1a, "DGROUP");
                v15 = s1a;
                if ( !v19 )
                  v15 = "FLAT";
              }
            }
          }
        }
        else
        {
          v15 = "nothing";
        }
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a2 + 56LL))(a2, v15, 0);
        goto LABEL_20;
      }
      v11 = a2[4];
      if ( v11 )
      {
        v12 = v11 + 1;
        v13 = a2[4];
        v14 = a2[3];
        --v11;
        if ( a2[5] >= v12 )
        {
LABEL_14:
          a2[4] = v12;
          *(_BYTE *)(v14 + v11) = 58;
          *(_BYTE *)(a2[3] + v13) = 0;
          goto LABEL_15;
        }
      }
      else
      {
        v14 = a2[3];
        v13 = 1;
        v12 = 2;
        if ( a2[5] >= 2u )
          goto LABEL_14;
      }
      v27 = v13;
      v26 = v11;
      v25 = v12;
      v20 = qvector_reserve();
      v13 = v27;
      v11 = v26;
      a2[3] = v20;
      v12 = v25;
      v14 = v20;
      goto LABEL_14;
    }
LABEL_20:
    ++v7;
    v6 += 8;
  }
  while ( v8 >= v7 );
  if ( a2[4] <= 1u )
    return v30 - __readfsqword(0x28u);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 27);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFF);
}
