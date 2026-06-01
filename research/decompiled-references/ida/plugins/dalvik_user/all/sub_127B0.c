__int64 __fastcall sub_127B0(char *s1, int a2, int a3, const char *a4)
{
  __int64 *v4; // rbx
  char *v5; // r12
  __int64 result; // rax
  char **v9; // rdx
  int v10; // ecx
  int v11; // edx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  char *v14; // rcx
  char **v15; // rax
  char *v16; // rax
  size_t v17; // rax
  size_t v18; // r14
  char *v19; // rax
  size_t v20; // rax
  size_t v21; // r12
  void *v22; // rdi
  size_t v23; // r13
  char *v24; // r14
  size_t v25; // rax
  const char *v26; // r8
  size_t v27; // rbx
  void *v28; // r12
  size_t v29; // r14
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  int i; // eax
  size_t v35; // rax
  size_t v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // r14
  _QWORD *v40; // rax
  char *v41; // r14
  size_t v42; // rax
  size_t v43; // r12
  void *v44; // rdi
  size_t v45; // r14
  __int64 v46; // rax
  void *v47; // rdi
  size_t v48; // r13
  size_t v49; // r13
  void *v50; // rdi
  void *v51; // r14
  __int64 v52; // rax
  __int64 v53; // rax
  size_t v54; // rax
  __int64 v55; // r12
  size_t v56; // r15
  __int64 v57; // rax
  __int64 v58; // rsi
  unsigned __int64 v59; // rdx
  char *v60; // r14
  __m128i v61; // xmm0
  __int64 v62; // r12
  __int64 v63; // rax
  size_t v64; // r12
  __int64 v65; // rax
  __m128i v66; // xmm0
  __int64 v67; // rsi
  char *v68; // rax
  __int64 v69; // [rsp+8h] [rbp-90F8h]
  __m128i s1a; // [rsp+18h] [rbp-90E8h] BYREF
  __int128 v72; // [rsp+28h] [rbp-90D8h]
  void *v73; // [rsp+40h] [rbp-90C0h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-90B8h]
  char *v75; // [rsp+60h] [rbp-90A0h] BYREF
  __m128i v76; // [rsp+68h] [rbp-9098h] BYREF
  __int64 v77; // [rsp+20A8h] [rbp-7058h]
  int v78; // [rsp+20B4h] [rbp-704Ch]
  char v79[4096]; // [rsp+40C0h] [rbp-5040h] BYREF
  char v80[4096]; // [rsp+50C0h] [rbp-4040h] BYREF
  char v81; // [rsp+60C0h] [rbp-3040h] BYREF
  char v82; // [rsp+70C0h] [rbp-2040h] BYREF
  char src[4104]; // [rsp+80C0h] [rbp-1040h] BYREF
  unsigned __int64 v84; // [rsp+90C8h] [rbp-38h]

  v84 = __readfsqword(0x28u);
  if ( !s1 )
  {
    v75 = nullptr;
    v76 = 0;
    if ( byte_7FB4D )
    {
      v75 = (char *)qvector_reserve();
      v76.m128i_i64[0] = 5;
      strcpy(v75, "true");
    }
    else
    {
      v75 = (char *)qvector_reserve();
      v76.m128i_i64[0] = 6;
      v75[5] = 0;
      v19 = v75;
      *(_DWORD *)v75 = 1936482662;
      v19[4] = 101;
    }
    qstrncpy();
    LOWORD(v73) = unk_7FB4C | (unsigned __int16)(2 * (unsigned __int8)byte_7FB48);
    v11 = sub_11410(
            (__int64)"Dalvik debugger configuration\n"
                     "%/Connection Settings\n"
                     "<#Path to Android Debug Bridge (adb) executable#~A~DB executable               :f1:0:32::>\n"
                     "<#Device connection string, a host port combination, or empty#~C~onnection string            :q2::3"
                     "2::>\n"
                     "<#Direct adb commands at a specific emulator/device instance, for example 'emulator-5554'#~E~mulato"
                     "r/device serial number:q3::32::>\n"
                     "\n"
                     "Start Application\n"
                     "<#Fill package name and launch activity from AndroidManifest.xml#~F~ill from AndroidManifest.xml:B4"
                     ":1:0::>\n"
                     "<#Unique name for the package, for example 'com.google.app.appname'#Title##~P~ackage name          "
                     "     :q5::45::>\n"
                     "<#Name of the class implementing the activity, for example '.MyActivity'#Activit~y~                "
                     "   :q6::45::>\n"
                     "<#Start command to launch APK from shell (defaults to 'am start -D ...')#(Alternative) S~t~art Comm"
                     "and:q7::45::>\n"
                     "APK debuggable: %8q\n"
                     "\n"
                     "<#Always guess (might be unsafe)#Detect Local Variable Types#Try to guess unknown types of local va"
                     "riables#A~l~ways:R>\n"
                     "<#Try to guess on Android API 28 and above, otherwise do not guess#A~u~to:R>\n"
                     "<#Never guess#~N~ever:R>9>\n"
                     "\n"
                     "<#Show hexadecimal object IDs in Locals/Watches windows#Other Options#show object ~I~D:C10::::>\n"
                     "<#Set breakpoints at the all methods of the activity class#preset ~B~PTs:C11::::>>\n",
            sub_10FF0,
            src,
            &qword_7FB30,
            &qword_7FBB0,
            sub_11690,
            &haystack,
            &::src,
            &qword_7FB50,
            &v75,
            &word_7FB4A,
            &v73);
    result = 3;
    if ( v11 )
    {
      unk_7FB4C = (unsigned __int8)v73 & 1;
      byte_7FB48 = ((unsigned __int8)v73 & 2) != 0;
      v20 = strlen(src);
      v21 = v20;
      if ( v20 )
      {
        v22 = (void *)qword_7FBD0;
        v23 = v20 + 1;
        if ( *((_QWORD *)&xmmword_7FBD8 + 1) < v20 + 1 )
        {
          qword_7FBD0 = qvector_reserve();
          v22 = (void *)qword_7FBD0;
        }
        *(_QWORD *)&xmmword_7FBD8 = v23;
        memmove(v22, src, v21);
        *(_BYTE *)(qword_7FBD0 + v21) = 0;
      }
      else
      {
        *(_QWORD *)&xmmword_7FBD8 = 0;
      }
      if ( (unsigned __int8)netnode_inited() )
        sub_F3A0(nullptr);
      result = 0;
    }
    if ( v75 )
    {
      s1a.m128i_i64[0] = result;
      v76.m128i_i64[0] = 0;
      qfree();
      return s1a.m128i_i64[0];
    }
    return result;
  }
  LODWORD(v4) = 0;
  v5 = s1;
  if ( *s1 )
  {
    s1a.m128i_i64[0] = (__int64)&off_7E560;
    while ( strcmp(*(const char **)s1a.m128i_i64[0], s1) )
    {
      LODWORD(v4) = (_DWORD)v4 + 1;
      s1a.m128i_i64[0] += 40;
      if ( (_DWORD)v4 == 15 )
        return 1;
    }
    v4 = (__int64 *)(int)v4;
    v9 = &(&off_7E560)[5 * (int)v4];
    v10 = *((char *)v9 + 8);
    if ( a3 != v10 )
      return 2;
    if ( (_BYTE)v10 != 2 )
    {
      if ( (_BYTE)v10 == 1 )
      {
        v24 = v9[3];
        if ( a4 && (s1a.m128i_i64[0] = (__int64)a4, v25 = strlen(a4), v26 = a4, (v27 = v25) != 0) )
        {
          v47 = *(void **)v24;
          v48 = v25 + 1;
          if ( *((_QWORD *)v24 + 2) < v25 + 1 )
          {
            v65 = qvector_reserve();
            v26 = (const char *)s1a.m128i_i64[0];
            *(_QWORD *)v24 = v65;
            v47 = (void *)v65;
          }
          *((_QWORD *)v24 + 1) = v48;
          memmove(v47, v26, v27);
          *(_BYTE *)(*(_QWORD *)v24 + v27) = 0;
        }
        else
        {
          *((_QWORD *)v24 + 1) = 0;
        }
      }
      else if ( (_BYTE)v10 == 3 )
      {
        *v9[3] = *(_DWORD *)a4 != 0;
      }
LABEL_24:
      if ( a2 == 2 && (unsigned __int8)netnode_inited() )
      {
        sub_F3A0(v5);
        return 0;
      }
      return 0;
    }
    v12 = (unsigned __int64)v9[4];
    v13 = *(_QWORD *)a4;
    v14 = v9[3];
    if ( v12 == 4 )
    {
      *(_DWORD *)v14 = v13;
      goto LABEL_21;
    }
    if ( v12 > 4 )
    {
      if ( v12 == 8 )
      {
        *(_QWORD *)v14 = v13;
        goto LABEL_21;
      }
    }
    else
    {
      if ( v12 == 1 )
      {
        *v14 = v13;
        goto LABEL_21;
      }
      if ( v12 == 2 )
      {
        *(_WORD *)v14 = v13;
LABEL_21:
        v15 = &(&off_7E560)[5 * (int)v4];
        if ( v15[2] == &byte_9[1] )
        {
          v16 = v15[3];
          if ( *(_WORD *)v16 > 2u )
            *(_WORD *)v16 = 1;
        }
        goto LABEL_24;
      }
    }
    if ( under_debugger )
      BUG();
    interr();
    goto LABEL_130;
  }
  if ( (unsigned __int8)netnode_inited() )
    sub_F870(nullptr);
  v4 = &qword_7FBD0;
  if ( (unsigned __int8)qfileexist() )
    return 0;
  if ( !(unsigned __int8)qisabspath() && (unsigned __int8)search_path() )
    return 0;
  a4 = v79;
  if ( !(unsigned __int8)search_path() )
  {
    s1a.m128i_i64[1] = 0;
    v72 = 0;
    v73 = nullptr;
    *(_OWORD *)n = 0;
    if ( (unsigned __int8)qgetenv() || (unsigned __int8)qgetenv() || (unsigned __int8)qgetenv() )
    {
      v28 = nullptr;
      v29 = n[0];
      if ( n[0] )
      {
        v28 = (void *)qalloc_or_throw();
        memcpy(v28, v73, n[0]);
      }
      v30 = v72;
      v31 = s1a.m128i_i64[1];
      if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
      {
        s1a.m128i_i64[1] = qvector_reserve();
        v31 = s1a.m128i_i64[1];
        v30 = v72;
      }
      v32 = v31 + 24 * v30;
      *(_QWORD *)v32 = v28;
      *(__m128i *)(v32 + 8) = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
      v33 = v72 + 1;
      *(_QWORD *)&v72 = v72 + 1;
      goto LABEL_62;
    }
    if ( !(unsigned __int8)qgetenv() )
    {
LABEL_114:
      qmakepath();
      v76 = 0;
      v54 = strlen(a4);
      v55 = v54 + 1;
      v56 = v54;
      v75 = (char *)qvector_reserve();
      v76.m128i_i64[0] = v55;
      memmove(v75, a4, v56);
      v75[v56] = 0;
      v57 = v72;
      v58 = s1a.m128i_i64[1];
      v59 = v72 + 1;
      if ( (unsigned __int64)&v75 < s1a.m128i_i64[1]
        || (unsigned __int64)&v75 >= s1a.m128i_i64[1] + 24LL * *((_QWORD *)&v72 + 1) )
      {
        if ( *((_QWORD *)&v72 + 1) < v59 )
        {
          s1a.m128i_i64[1] = qvector_reserve();
          v58 = s1a.m128i_i64[1];
          v57 = v72;
        }
        v66 = _mm_loadu_si128(&v76);
        v76.m128i_i64[1] = 0;
        v67 = 24 * v57 + v58;
        v68 = v75;
        v75 = nullptr;
        *(__m128i *)(v67 + 8) = v66;
        *(_QWORD *)v67 = v68;
      }
      else
      {
        v60 = v75;
        v61 = _mm_loadl_epi64(&v76);
        v62 = v76.m128i_i64[1];
        v75 = nullptr;
        v76 = 0;
        if ( *((_QWORD *)&v72 + 1) < v59 )
        {
          s1a.m128i_i64[0] = v61.m128i_i64[0];
          s1a.m128i_i64[1] = qvector_reserve();
          v58 = s1a.m128i_i64[1];
          v61 = _mm_loadl_epi64(&s1a);
          v57 = v72;
        }
        v63 = v58 + 24 * v57;
        *(_QWORD *)v63 = v60;
        *(__m128i *)(v63 + 8) = _mm_unpacklo_epi64(v61, (__m128i)(unsigned __int64)v62);
      }
      *(_QWORD *)&v72 = v72 + 1;
      if ( v75 )
      {
        v76.m128i_i64[0] = 0;
        qfree();
      }
      v33 = v72;
LABEL_62:
      v69 = s1a.m128i_i64[1];
      if ( 24 * v33 )
      {
        while ( 2 )
        {
          v77 = 0;
          v78 = 0;
          qmakepath();
          s1a.m128i_i64[0] = qbasename();
          for ( i = qfindfirst(); !i; i = qfindnext() )
          {
            qstrncpy();
            if ( !strncmp((const char *)s1a.m128i_i64[0], "adt-bundle-", 0xBu) )
            {
              qmakepath();
              if ( (unsigned __int8)qfileexist() || !(unsigned __int8)qisabspath() && (unsigned __int8)search_path() )
              {
                v35 = strlen(v80);
                v36 = v35;
                if ( v35 )
                {
                  v44 = (void *)*v4;
                  v45 = v35 + 1;
                  if ( v4[2] < v35 + 1 )
                  {
                    v46 = qvector_reserve();
                    *v4 = v46;
                    v44 = (void *)v46;
                  }
                  v4[1] = v45;
                  memmove(v44, v80, v36);
                  *(_BYTE *)(*v4 + v36) = 0;
                }
                else
                {
                  v4[1] = 0;
                }
                qfindclose();
                goto LABEL_70;
              }
            }
          }
          qfindclose();
          v41 = &v81;
          qmakepath();
          if ( (unsigned __int8)qfileexist()
            || !(unsigned __int8)qisabspath() && (unsigned __int8)search_path()
            || (v41 = &v82, qmakepath(), (unsigned __int8)qfileexist())
            || !(unsigned __int8)qisabspath() && (unsigned __int8)search_path() )
          {
            v42 = strlen(v41);
            v43 = v42;
            if ( v42 )
            {
              v49 = v42 + 1;
              if ( v4[2] < v42 + 1 )
                *v4 = qvector_reserve();
              v50 = (void *)*v4;
              v4[1] = v49;
              memmove(v50, v41, v43);
              *(_BYTE *)(*v4 + v43) = 0;
            }
            else
            {
              v4[1] = 0;
            }
          }
          else
          {
            v69 += 24;
            if ( v69 != s1a.m128i_i64[1] + 24LL * (_QWORD)v72 )
              continue;
          }
          break;
        }
      }
LABEL_70:
      if ( v73 )
      {
        n[0] = 0;
        qfree();
      }
      v37 = s1a.m128i_i64[1];
      if ( !s1a.m128i_i64[1] )
        return 0;
      if ( (_QWORD)v72 )
      {
        v38 = 0;
        v39 = v72;
        do
        {
          v40 = (_QWORD *)(v37 + 24 * v38);
          if ( *v40 )
          {
            v40[1] = 0;
            qfree();
            v37 = s1a.m128i_i64[1];
          }
          ++v38;
        }
        while ( v39 != v38 );
      }
      *(_QWORD *)&v72 = 0;
      qfree();
      return 0;
    }
    v5 = (char *)n[0];
    v51 = nullptr;
    if ( !n[0] )
    {
LABEL_111:
      v52 = v72;
      if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
      {
        s1a.m128i_i64[1] = qvector_reserve();
        v52 = v72;
      }
      v53 = s1a.m128i_i64[1] + 24 * v52;
      *(_QWORD *)v53 = v51;
      *(__m128i *)(v53 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
      *(_QWORD *)&v72 = v72 + 1;
      goto LABEL_114;
    }
LABEL_130:
    v51 = (void *)qalloc_or_throw();
    memcpy(v51, v73, (size_t)v5);
    goto LABEL_111;
  }
  if ( (unsigned __int8)qfileexist() )
    goto LABEL_35;
  if ( (unsigned __int8)qisabspath() )
    return 0;
  if ( !(unsigned __int8)search_path() )
    return 0;
LABEL_35:
  v17 = strlen(v79);
  v18 = v17;
  if ( v17 )
  {
    v64 = v17 + 1;
    if ( *((_QWORD *)&xmmword_7FBD8 + 1) < v17 + 1 )
      qword_7FBD0 = qvector_reserve();
    *(_QWORD *)&xmmword_7FBD8 = v64;
    memmove((void *)qword_7FBD0, v79, v18);
    *(_BYTE *)(qword_7FBD0 + v18) = 0;
    return 0;
  }
  else
  {
    *(_QWORD *)&xmmword_7FBD8 = 0;
    return 0;
  }
}

