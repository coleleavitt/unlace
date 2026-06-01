__int64 __fastcall sub_D7F0(char *s2, int a2, int a3, __int64 *a4)
{
  int v4; // ebx
  const char **v6; // r13
  __int64 result; // rax
  char **v8; // rax
  int v9; // ecx
  int v10; // edx
  size_t v11; // rax
  size_t v12; // r12
  size_t v13; // rax
  size_t v14; // rbp
  __int16 v15; // ax
  char *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // al
  const char *v20; // rdi
  const char *v21; // rdi
  const char *v22; // rbx
  char v23; // al
  const char *v24; // rbx
  char v25; // al
  const char *v26; // rdi
  const char *v27; // rdi
  char v28; // al
  size_t v29; // r12
  void *v30; // rdi
  size_t v31; // r13
  void *v32; // rdi
  char *v33; // r15
  size_t v34; // rax
  size_t v35; // rbp
  void *v36; // rdi
  size_t v37; // rdx
  __int64 v38; // rax
  size_t v40; // [rsp+8h] [rbp-860h]
  unsigned __int16 v41; // [rsp+1Ch] [rbp-84Ch] BYREF
  __int16 v42; // [rsp+1Eh] [rbp-84Ah] BYREF
  char s[1024]; // [rsp+20h] [rbp-848h] BYREF
  char src[1032]; // [rsp+420h] [rbp-448h] BYREF
  unsigned __int64 v45; // [rsp+828h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( s2 )
  {
    v4 = 0;
    v6 = (const char **)&off_389A0;
    if ( *s2 )
    {
      while ( strcmp(*v6, s2) )
      {
        ++v4;
        v6 += 4;
        if ( v4 == 10 )
          return 1;
      }
      v8 = &(&off_389A0)[4 * v4];
      v9 = *((char *)v8 + 8);
      if ( a3 != v9 )
        return 2;
      if ( (_BYTE)v9 != 2 )
      {
        if ( (_BYTE)v9 == 1 )
        {
          v33 = v8[2];
          if ( a4 && (v34 = strlen((const char *)a4), (v35 = v34) != 0) )
          {
            v36 = *(void **)v33;
            v37 = v34 + 1;
            if ( *((_QWORD *)v33 + 2) < v34 + 1 )
            {
              v40 = v34 + 1;
              v38 = qvector_reserve();
              v37 = v40;
              *(_QWORD *)v33 = v38;
              v36 = (void *)v38;
            }
            *((_QWORD *)v33 + 1) = v37;
            memmove(v36, a4, v35);
            *(_BYTE *)(*(_QWORD *)v33 + v35) = 0;
          }
          else
          {
            *((_QWORD *)v33 + 1) = 0;
          }
        }
        goto LABEL_24;
      }
      v16 = v8[2];
      v17 = (unsigned __int64)v8[3];
      v18 = *a4;
      if ( v17 == 4 )
      {
        *(_DWORD *)v16 = v18;
        goto LABEL_24;
      }
      if ( v17 > 4 )
      {
        if ( v17 == 8 )
        {
          *(_QWORD *)v16 = v18;
          goto LABEL_24;
        }
      }
      else
      {
        if ( v17 == 1 )
        {
          *v16 = v18;
          goto LABEL_24;
        }
        if ( v17 == 2 )
        {
          *(_WORD *)v16 = v18;
LABEL_24:
          if ( a2 == 2 )
            byte_3C3A8 = 1;
          v19 = *((_BYTE *)&off_389A0 + 32 * v4 + 9);
          if ( v19 )
          {
            if ( v19 != 1 )
              return 0;
            v20 = ::s;
            if ( (_QWORD)xmmword_3C418 )
              v20 = (const char *)dest;
            if ( !(unsigned __int8)sub_BE70(v20) )
              return 0;
            v21 = ::s;
            goto LABEL_32;
          }
          v24 = ::s;
          if ( (_QWORD)xmmword_3C438 )
            v24 = (const char *)qword_3C430;
          v25 = qfileexist();
          if ( (debug & 0x10000) != 0 )
          {
            if ( !v25 )
            {
              sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", v24, "not found");
              return 0;
            }
            sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", v24, "FOUND!");
          }
          else if ( !v25 )
          {
            return 0;
          }
          v26 = ::s;
          if ( (_QWORD)xmmword_3C418 )
            v26 = (const char *)dest;
          if ( (unsigned __int8)sub_BE70(v26) )
            return 0;
          v21 = ::s;
LABEL_55:
          if ( (_QWORD)xmmword_3C438 )
            v21 = (const char *)qword_3C430;
          sub_C700(v21);
          return 0;
        }
      }
      if ( !under_debugger )
        interr();
      BUG();
    }
    v22 = ::s;
    sub_D700(nullptr);
    if ( (_QWORD)xmmword_3C438 )
      v22 = (const char *)qword_3C430;
    v23 = qfileexist();
    if ( (debug & 0x10000) != 0 )
    {
      if ( !v23 )
      {
        sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", v22, "not found");
LABEL_41:
        sub_CB20();
        goto LABEL_52;
      }
      sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", v22, "FOUND!");
    }
    else if ( !v23 )
    {
      goto LABEL_41;
    }
LABEL_52:
    v27 = ::s;
    if ( (_QWORD)xmmword_3C418 )
      v27 = (const char *)dest;
    v28 = sub_BE70(v27);
    v21 = ::s;
    if ( v28 )
    {
LABEL_32:
      if ( (_QWORD)xmmword_3C418 )
        v21 = (const char *)dest;
      sub_BF40(v21);
      return 0;
    }
    goto LABEL_55;
  }
  v41 = dword_3A5A0;
  v42 = (word_3A5A4 & 8) != 0;
  qstrncpy();
  qstrncpy();
  v10 = sub_CEC0(
          (__int64)"PIN Options\n"
                   "%/<~P~IN executable       :f1::40::>\n"
                   "<#PIN tool path (idadbg) for the current architecture#~D~irectory with idadbg:F2::40::>\n"
                   "\n"
                   "<##On startup enable##~R~egister value recording:C3>>  <##PIN Tool#Execute PIN locally instead of con"
                   "necting to an already running PIN tool instance#Aut~o~launch PIN for localhost:c4>\n"
                   "                                 <#Enable debug mode#Deb~u~g mode:c5>>\n"
                   "\n"
                   "Extra arguments:\n"
                   "<#Additional PIN command line arguments before -t /path/to/pin/tool#~B~efore PIN tool:q6::40::>\n"
                   "<#Additional PIN command line arguments after -t /path/to/pin/tool #~A~fter PIN tool :q7::40::>\n"
                   "\n",
          sub_C830,
          s,
          src,
          &v42,
          &v41,
          &qword_3C3F0,
          &qword_3C3D0);
  result = 3;
  if ( v10 )
  {
    v11 = strlen(s);
    v12 = v11;
    if ( v11 )
    {
      v31 = v11 + 1;
      v32 = qword_3C430;
      if ( *((_QWORD *)&xmmword_3C438 + 1) < v11 + 1 )
      {
        qword_3C430 = (void *)qvector_reserve();
        v32 = qword_3C430;
      }
      *(_QWORD *)&xmmword_3C438 = v31;
      memmove(v32, s, v12);
      *((_BYTE *)qword_3C430 + v12) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_3C438 = 0;
    }
    v13 = strlen(src);
    v14 = v13;
    if ( v13 )
    {
      v29 = v13 + 1;
      v30 = dest;
      if ( *((_QWORD *)&xmmword_3C418 + 1) < v13 + 1 )
      {
        dest = (void *)qvector_reserve();
        v30 = dest;
      }
      *(_QWORD *)&xmmword_3C418 = v29;
      memmove(v30, src, v14);
      *((_BYTE *)dest + v14) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_3C418 = 0;
    }
    v15 = word_3A5A4 & 0xFFF7;
    if ( v42 )
      v15 = word_3A5A4 | 8;
    word_3A5A4 = v15;
    byte_3C3A8 = 1;
    dword_3A5A0 = v41;
    return 0;
  }
  return result;
}

